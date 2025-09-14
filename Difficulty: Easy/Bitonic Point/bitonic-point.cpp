// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        int n = arr.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return arr[start];
    }
};
