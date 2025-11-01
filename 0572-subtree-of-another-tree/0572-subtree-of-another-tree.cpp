class Solution {
public:
    bool isidentical(TreeNode* root,TreeNode* subRoot){
        if(!root||!subRoot) return root==subRoot;
        bool leftsame=isidentical(root->left,subRoot->left);
        bool rightsame=isidentical(root->right,subRoot->right);
        return leftsame&&rightsame && root->val==subRoot->val;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot) return root==subRoot;
        if(root->val==subRoot->val && isidentical(root,subRoot)) return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};