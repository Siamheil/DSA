class Solution {
  public:
    int solve(int i,int j,vector<int>&arr,vector<vector<int>>&dp){
        if(i>=j) return 0;
        int ans=INT_MAX;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i;k<=j-1;k++){
            int temp=solve(i,k,arr,dp)+solve(k+1,j,arr,dp)+arr[i-1]*arr[k]*arr[j];
            ans=min(temp,ans);
        }
        return dp[i][j]=ans;
     }
    int matrixMultiplication(vector<int> &arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1,n-1,arr,dp);
    }
};