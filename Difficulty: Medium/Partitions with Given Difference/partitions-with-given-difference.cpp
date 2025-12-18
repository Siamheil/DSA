class Solution {
  public:
    int solve(vector<int>&arr,int index,int target,vector<vector<int>>&dp){
        if(index==0){
            if(target==0 && arr[0]==0) return 2;
            if(target==0 || arr[0]==target) return 1;
            return 0;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int notpick=solve(arr,index-1,target,dp);
        int pick=0;
        if(arr[index]<=target)
        pick=solve(arr,index-1,target-arr[index],dp);
        return dp[index][target]=notpick+pick;
    }
    int countPartitions(vector<int>& arr, int diff) {
        int n=arr.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=arr[i];
        }
        if(totsum-diff<0 || (totsum-diff)%2) return 0;
        int target=(totsum-diff)/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(arr,n-1,target,dp);
    }
};