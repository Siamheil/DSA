class Solution {
public:
    static int dp[1001][1001];

    bool isPalindrome(string &s, int i, int j){
        while(i < j){
            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }

    int solve(string &s, int i, int j){
        if(i >= j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(isPalindrome(s, i, j)) return dp[i][j] = 0;

        int ans = INT_MAX;
        for(int k = i; k < j; k++){
            if(isPalindrome(s, i, k)){
                ans = min(ans, 1 + solve(s, k + 1, j));
            }
        }
        return dp[i][j] = ans;
    }

    int palPartition(string &s) {
        memset(dp, -1, sizeof(dp));
        return solve(s, 0, s.size() - 1);
    }
};

int Solution::dp[1001][1001];
