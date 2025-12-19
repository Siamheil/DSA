class Solution {
public:
    int solve(vector<int>&nums,int index,int currsum,int target,vector<vector<int>>&dp){
        if(index<0) return currsum==target?1:0;
        if(dp[index][currsum+1000]!=-1) return dp[index][currsum+1000];
        int plus=solve(nums,index-1,currsum+nums[index],target,dp);
        int minus=solve(nums,index-1,currsum-nums[index],target,dp);
        return dp[index][currsum+1000]=plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(2001,-1));
        return solve(nums,n-1,0,target,dp);
    }
};