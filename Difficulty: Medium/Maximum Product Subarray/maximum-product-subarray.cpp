class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int maxProd = arr[0], minProd = arr[0], result = arr[0];
        for (int i = 1; i < n; ++i) {
            if (arr[i] < 0) swap(maxProd, minProd);
            maxProd = max(arr[i], maxProd * arr[i]);
            minProd = min(arr[i], minProd * arr[i]);
            result = max(result, maxProd);
        }
        return result;
    }
};