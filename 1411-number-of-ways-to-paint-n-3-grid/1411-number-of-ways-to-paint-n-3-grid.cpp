class Solution {
    const int MOD = 1e9+7;
    int dp[5000*3+4][4][4][4];
    int rec(int ind, int p1, int p2, int p3, int n) {
        int ans = 0;
        if (ind == n*3) return 1;
        if (dp[ind][p1+1][p2+1][p3+1] != -1) return dp[ind][p1+1][p2+1][p3+1];
        for(int i=0; i<3; i++) {
            if (i!= p1 && i!=p3 || (ind%3 == 0 && i!=p1)) {
                ans = (ans + rec(ind+1,p2,p3,i,n) ) % MOD;
            }
        }
        return dp[ind][p1+1][p2+1][p3+1] = ans;
    }
public:
    int numOfWays(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(0,-1,-1,-1,n);
    }
};