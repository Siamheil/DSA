class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int target) {
        int s = 0, curr = 0;
        for (int e = 0; e < arr.size(); ++e) {
            curr += arr[e];
            while (curr > target && s <= e) curr -= arr[s++];
            if (curr == target) return {s + 1, e + 1};
        }
        return {-1};
    }
};