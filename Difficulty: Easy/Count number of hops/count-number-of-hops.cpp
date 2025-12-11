
class Solution {
  public:
    int solve(int i,int n,vector<int>&dp){
        if(i==n) return 1;
        if(i>n) return 0;
        dp[n]=1;
        dp[n+1]=0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=solve(i+1,n,dp)+solve(i+2,n,dp)+solve(i+3,n,dp);
    }
    int countWays(int n) {
        vector<int>dp(n+3,-1);
        return solve(0,n,dp);
    }
};
