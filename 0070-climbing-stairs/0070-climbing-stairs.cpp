class Solution {
public:
    int solve(int i,vector<int>&dp,int n){
        if(i==n) return 1;
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=solve(i+1,dp,n)+solve(i+2,dp,n);
    }
    int climbStairs(int n) {
        vector<int>dp(n+2,-1);
        return solve(0,dp,n);
    }
};