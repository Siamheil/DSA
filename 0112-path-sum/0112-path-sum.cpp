class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(!root->left&&!root->right){
            return root->val==targetSum;
        }
        int newTarget=targetSum-root->val;
        return hasPathSum(root->left,newTarget) || hasPathSum(root->right,newTarget);
    }
};