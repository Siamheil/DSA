class Solution {
public:
    int helper(int n,vector<int>&dp){
        if(n==0) return 0;
        int mincount=INT_MAX;
        if(dp[n]!=-1) return dp[n];
        for(int i=1;i*i<=n;i++){
            int result=1+helper(n-i*i,dp);
            mincount=min(mincount,result);
        }
        return dp[n]=mincount;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};