class Solution {
  public:
    bool solve(int i,vector<int>& arr,int target,
    vector<vector<int>>& dp){
        if(target==0) return 1;
        if(i==0) return arr[i]==target;
        if(dp[i][target]!=-1) return dp[i][target];
        int skip=solve(i-1,arr,target,dp);
        int take=0;
        if(arr[i]<=target){
            take=solve(i-1,arr,target-arr[i],dp);
        }
        return dp[i][target]=take || skip;
    }
    bool equalPartition(vector<int>& arr) {
        int n=arr.size();
        int total_sum=0;
        for(int num:arr){
            total_sum+=num;
        }
        if(total_sum % 2 != 0) return false;
        int target=total_sum/2;
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return solve(n-1,arr,target,dp);
    }
};