class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=arr[n-3];
        return ans;
    }
};