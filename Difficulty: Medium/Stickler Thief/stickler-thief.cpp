class Solution {
  public:
    int solve(int i,int n,vector<int>&arr,vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int skip=0+solve(i+1,n,arr,dp);
        int steal=arr[i]+solve(i+2,n,arr,dp);
        return dp[i]=max(skip,steal);
    }
    int findMaxSum(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return solve(0,n,arr,dp);
    }
};