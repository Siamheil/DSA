class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n = arr.size();
        sort(arr.begin(), arr.end()); // sort first

        int i = 0, j = 1;
        while (i < n && j < n) {
            if (i != j && arr[j] - arr[i] == x) {
                return true;
            }
            else if (arr[j] - arr[i] < x) {
                j++; // need bigger difference
            }
            else {
                i++; // need smaller difference
            }
        }
        return false;
    }
};
