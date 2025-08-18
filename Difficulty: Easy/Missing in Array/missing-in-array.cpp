class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1; // because one number is missing
        long long total = (n *1LL* (n + 1)) / 2;
        
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        
        return total - sum;
    }
};
