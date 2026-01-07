class Solution {
public:
    static const int MOD = 1e9 + 7;

    long long ans = 0;
    long long total = 0;

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long sub = root->val + left + right;
        if (sub != total) {
            ans = max(ans, sub * (total - sub));
        }

        return sub;
    }

    long long totalSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + totalSum(root->left) + totalSum(root->right);
    }

    int maxProduct(TreeNode* root) {
        total = totalSum(root);
        dfs(root);
        return ans % MOD;
    }
};
