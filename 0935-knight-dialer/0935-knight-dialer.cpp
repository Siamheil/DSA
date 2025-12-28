class Solution {
public:
    int M=1e9+7;
    int dp[5001][10];
    vector<vector<int>>adj={
        {4,6},
        {6,8},
        {7,9},
        {4,8},
        {0,3,9},
        {},
        {0,1,7},
        {2,6},
        {1,3},
        {2,4}
    };
    int solve(int n,int cell){
        if(n==0) return 1;
        int ans=0;
        if(dp[n][cell]!=-1) return dp[n][cell];
        for(int &nextcell:adj[cell]){
            ans=(ans+solve(n-1,nextcell))%M;
        }
        return dp[n][cell]=ans;
    }
    int knightDialer(int n) {
        memset(dp,-1,sizeof(dp));
        int result=0;
        for(int cell=0;cell<=9;cell++){
            result=(result+solve(n-1,cell))%M;
        }
        return result;
    }
};