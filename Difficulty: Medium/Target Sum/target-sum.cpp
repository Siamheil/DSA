class Solution {
  public:
    const int MOD = 1e9 + 7;
    int solve(int index, vector<int>& A, int currsum, int target) {
        if (index < 0) return currsum == target ? 1 : 0;
        int plus = solve(index - 1, A, currsum + A[index], target);
        int minus = solve(index - 1, A, currsum - A[index], target);
        return (plus + minus) % MOD;
    }

    int findTargetSumWays(int n, vector<int>& A, int target) {
        return solve(n - 1, A, 0, target);
    }
};