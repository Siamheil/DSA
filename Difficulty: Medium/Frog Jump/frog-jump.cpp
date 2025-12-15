class Solution {
  public:
    int solve(int index,vector<int>&height,vector<int>&dp){
        if(index==0) return 0;
        if(dp[index]!=-1) return dp[index];
        int left=solve(index-1,height,dp)+abs(height[index]-height[index-1]);
        int right=INT_MAX;
        
        if(index>1) right=solve(index-2,height,dp)+abs(height[index]-height[index-2]);
        return dp[index]=min(left,right);
    }    
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n+2,-1);
        return solve(n-1,height,dp);
    }
};