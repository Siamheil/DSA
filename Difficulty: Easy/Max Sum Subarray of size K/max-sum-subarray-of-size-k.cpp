class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int sum=0,ans=INT_MIN;
        int start=0,end=0,n=arr.size();
        while(end<n){
            sum=sum+arr[end];
            if(end-start+1<k) end++;
            else if(end-start+1==k){
                ans=max(ans,sum);
                sum=sum-arr[start];
                start++;
                end++;
            }
        }
        return ans;
    }
};