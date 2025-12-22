class Solution {
public:
    int solve(int i,int j,string& word1,string &word2,vector<vector<int>>&dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]){
            return dp[i][j]=0+solve(i-1,j-1,word1,word2,dp);
        }
        return dp[i][j]=1+min(solve(i-1,j,word1,word2,dp),min(solve(i,j-1,word1,word2,dp),solve(i-1,j-1,word1,word2,dp)));
    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,word1,word2,dp);
    }
};