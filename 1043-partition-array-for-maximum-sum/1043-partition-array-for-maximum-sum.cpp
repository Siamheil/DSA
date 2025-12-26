class Solution {
public:
    int n;
    int solve(vector<int>&arr,int i,int k,vector<int>&dp){
        if(i>=n) return 0;
        int result=0;
        int curr_max=-1;
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<n && j-i+1<=k;j++){
            curr_max=max(curr_max,arr[j]);
            result=max(result,(j-i+1)*curr_max+solve(arr,j+1,k,dp));
        }
        return dp[i]=result;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        n=arr.size();
        vector<int>dp(n+1,-1);
        return solve(arr,0,k,dp);
    }
};