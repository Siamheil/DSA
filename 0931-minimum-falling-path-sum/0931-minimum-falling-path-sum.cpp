class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int j = 0; j < n; ++j)
            dp[n-1][j] = matrix[n-1][j];
        for (int i = n-2; i >= 0; --i) {
            for (int j = 0; j < n; ++j) {
                int down = dp[i+1][j];
                int left_diag = (j > 0) ? dp[i+1][j-1] : INT_MAX;
                int right_diag = (j < n-1) ? dp[i+1][j+1] : INT_MAX;
                dp[i][j] = matrix[i][j] + min({down, left_diag, right_diag});
            }
        }
        int result = INT_MAX;
        for (int j = 0; j < n; ++j)
            result = min(result, dp[0][j]);
        return result;
    }
};