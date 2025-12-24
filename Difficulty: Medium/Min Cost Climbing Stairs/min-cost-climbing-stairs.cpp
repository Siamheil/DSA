class Solution {
  public:
    int dp[100001];
    int solve(int i,vector<int>&cost){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int a=cost[i]+solve(i+1,cost);
        int b=cost[i]+solve(i+2,cost);
        return dp[i]=min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        memset(dp,-1,sizeof(dp));
        return min(solve(0,cost),solve(1,cost));
    }
};