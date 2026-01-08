class Solution {
  public:
    int n;
    int dp[1001][1002];
    int solve(int i,int prev,vector<int>& arr){
        if(i>=n) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int take=0;
        if(prev==-1 || arr[prev]<arr[i]){
            take=1+solve(i+1,i,arr);
        }
        int not_take=solve(i+1,prev,arr);
        return dp[i][prev+1]=max(take,not_take);
    }
    int lis(vector<int>& arr) {
        n=arr.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,-1,arr);
    }
};