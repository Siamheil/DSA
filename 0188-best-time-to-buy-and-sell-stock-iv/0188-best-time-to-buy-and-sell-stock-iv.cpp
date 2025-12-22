class Solution {
public:
    int solve(int index,int buy,int k,vector<int>&prices,int n,
    vector<vector<vector<int>>>&dp){
        if(index==n) return 0;
        if(k==0) return 0;
        int profit=0;
        if(dp[index][buy][k]!=-1) return dp[index][buy][k];
        if(buy){
            profit=max(-prices[index]+solve(index+1,0,k,prices,n,dp),
            0+solve(index+1,1,k,prices,n,dp));
        }else{
            profit=max(prices[index]+solve(index+1,1,k-1,prices,n,dp),
            0+solve(index+1,0,k,prices,n,dp));
        }
        return dp[index][buy][k]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0,1,k,prices,n,dp);
    }
};