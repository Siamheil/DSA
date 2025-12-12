class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        int ans=max(lh,rh)+1;
        return ans;
    }
};