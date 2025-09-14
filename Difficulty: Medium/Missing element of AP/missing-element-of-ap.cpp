class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        int d = arr[1] - arr[0];
        for(int i = 2; i < n; i++) {
            int diff = arr[i] - arr[i-1];
            if(abs(diff) < abs(d)) d = diff;
        }
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] != d) {
                return arr[i-1] + d;
            }
        }
        return arr[n-1] + d;
    }
};