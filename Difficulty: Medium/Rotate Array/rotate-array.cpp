class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d %= n;

        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.begin() + n);
        reverse(arr.begin(), arr.begin() + n);
    }
};