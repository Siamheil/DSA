class Solution {
public:
    int M=1e9+7;
    int dp[100001][2][3];
    int solve(int n,int absent,int conse_late){
        if(absent>=2 || conse_late>=3) return 0;
        if(n==0) return 1;
        if(dp[n][absent][conse_late]!=-1) return dp[n][absent][conse_late];
        long long count=0;
        count+=solve(n-1,absent+1,0);
        count+=solve(n-1,absent,conse_late+1);
        count+=solve(n-1,absent,0);
        return dp[n][absent][conse_late]=count%M;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n,0,0);
    }
};