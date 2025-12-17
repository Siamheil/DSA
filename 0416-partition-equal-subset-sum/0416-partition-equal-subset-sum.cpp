class Solution {
public:
    bool solve(int index,int target,vector<int>&nums,vector<vector<int>>&dp){
        if(target==0) return true;
        if(index==0) return (target==nums[0]);
        if(dp[index][target]!=-1) return dp[index][target];
        bool notpick=solve(index-1,target,nums,dp);
        bool pick=false; 
        if(nums[index]<=target) {
            pick=solve(index-1,target-nums[index],nums,dp);
        }
        return dp[index][target]=notpick or pick;
    }
    bool canPartition(vector<int>& nums) {
        int totSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totSum+=nums[i];
        }
        if(totSum%2!=0) return false;
        int target=totSum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,target,nums,dp);
    }
};