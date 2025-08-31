// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n=arr.size();
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            mx = max(mx,arr[i]);
            mn = min(mn,arr[i]);
        }
        return {mn,mx};
    }
};