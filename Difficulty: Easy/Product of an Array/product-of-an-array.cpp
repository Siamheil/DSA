class Solution {
public:
    long long int product(vector<int> &arr) {
        long long mod = 1e9 + 7;
        long long prod = 1;
        for (int num : arr) {
            prod = (prod * num) % mod;
        }
        return prod;
    }
};
