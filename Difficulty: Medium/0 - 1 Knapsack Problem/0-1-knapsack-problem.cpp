class Solution {
  public:
    int solve(int index,int W,vector<int> &val, vector<int> &wt,vector<vector<int>>&dp){
        if(index==0){
            if(wt[0]<=W) return val[0];
            else return 0;
        }
        if(dp[index][W]!=-1) return dp[index][W];
        int notPick=0+solve(index-1,W,val,wt,dp);
        int pick=INT_MIN;
        if(wt[index]<=W)
        pick=val[index]+solve(index-1,W-wt[index],val,wt,dp);
        return dp[index][W]=max(notPick,pick);
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        return solve(n-1,W,val,wt,dp);
    }
};