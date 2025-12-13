class Solution {
public:
    int solve(int n,vector<int>&cost,vector<int>&dp){
        if(n<=1) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=min(cost[n-1]+solve(n-1,cost,dp),cost[n-2]+solve(n-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return solve(n,cost,dp);
    }
};