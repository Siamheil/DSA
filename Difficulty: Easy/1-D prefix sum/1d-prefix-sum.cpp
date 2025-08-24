class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        return prefix;
    }
};