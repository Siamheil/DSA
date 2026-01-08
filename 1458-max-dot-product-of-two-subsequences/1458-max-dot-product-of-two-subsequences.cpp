class Solution {
public:
    int n, m;
    vector<int> a, b;
    vector<vector<int>> dp;
    vector<vector<bool>> vis;

    int solve(int i, int j) {
        if (i == n || j == m)
            return INT_MIN;

        if (vis[i][j])
            return dp[i][j];

        vis[i][j] = true;

        int take = a[i] * b[j];
        int next = solve(i + 1, j + 1);
        if (next > 0)
            take += next;

        int skip1 = solve(i + 1, j);
        int skip2 = solve(i, j + 1);

        return dp[i][j] = max({take, skip1, skip2});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        a = nums1;
        b = nums2;
        n = a.size();
        m = b.size();

        dp.assign(n, vector<int>(m, 0));
        vis.assign(n, vector<bool>(m, false));

        return solve(0, 0);
    }
};