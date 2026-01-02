class Solution {
public:
    int dp[1001][1001];
    int solve(int currA,int clipA,int n){
        if(currA==n) return 0;
        if(currA>n) return 100000;
        if(dp[currA][clipA]!=-1) return dp[currA][clipA];
        int copyAllpaste=1+1+solve(currA+currA,currA,n);
        int paste=1+solve(currA+clipA,clipA,n);
        return dp[currA][clipA]=min(copyAllpaste,paste);
    }
    int minSteps(int n) {
        memset(dp,-1,sizeof(dp));
        if(n==1) return 0;
        return 1+solve(1,1,n);
    }
};