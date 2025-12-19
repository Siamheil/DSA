class Solution {
public:
    int solve(vector<int>&nums,int index,int currsum,int target){
        if(index<0) return currsum==target?1:0;
        int plus=solve(nums,index-1,currsum+nums[index],target);
        int minus=solve(nums,index-1,currsum-nums[index],target);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return solve(nums,n-1,0,target);
    }
};