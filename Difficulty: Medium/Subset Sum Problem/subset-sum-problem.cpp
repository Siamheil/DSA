class Solution {
  public:
    bool solve(int index,int sum,vector<int>&arr,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(index==0) return (arr[0]==sum);
        if(dp[index][sum]!=-1) return dp[index][sum];
        bool nottake=solve(index-1,sum,arr,dp);
        bool take=false;
        if(arr[index]<=sum){
            take=solve(index-1,sum-arr[index],arr,dp);
        }
        return dp[index][sum]=nottake or take;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return solve(n-1,sum,arr,dp);
    }
};