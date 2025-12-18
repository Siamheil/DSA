class Solution {
  public:
    int solve(int index,int target,vector<int>&arr,vector<vector<int>>&dp){
        if(index == 0) {
            if(target == 0 && arr[0] == 0)
                return 2; 
            if(target == 0 || arr[0] == target)
                return 1;
            return 0;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int notpick=solve(index-1,target,arr,dp);
        int pick=0;
        if(arr[index]<=target)
        pick=solve(index-1,target-arr[index],arr,dp);
        return dp[index][target]=notpick+pick;
    }
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,target,arr,dp);
    }
};