class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int maxi=INT_MIN;
        int prefix=0;
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxi;
    }
};