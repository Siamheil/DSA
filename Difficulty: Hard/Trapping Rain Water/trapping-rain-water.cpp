class Solution {
public:
    int maxWater(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, res = 0, lMax = 0, rMax = 0;
        while (l < r) {
            arr[l] < arr[r] ? (lMax = max(lMax, arr[l]), res += lMax - arr[l++]) : (rMax = max(rMax, arr[r]), res += rMax - arr[r--]);
        }
        return res;
    }
};