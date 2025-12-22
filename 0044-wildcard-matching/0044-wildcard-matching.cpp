class Solution {
public:
    int dp[2001][2001];

    bool solve(int i, int j, string &s, string &p) {
        if (i < 0 && j < 0) return true;
        if (j < 0 && i >= 0) return false;
        if (i < 0 && j >= 0) {
            for (int k = 0; k <= j; k++) {
                if (p[k] != '*') return false;
            }
            return true;
        }

        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] == p[j] || p[j] == '?') {
            return dp[i][j] = solve(i - 1, j - 1, s, p);
        }

        if (p[j] == '*') {
            return dp[i][j] = solve(i, j - 1, s, p) ||
                              solve(i - 1, j, s, p);
        }

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(s.size() - 1, p.size() - 1, s, p);
    }
};
