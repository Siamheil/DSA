/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,int &prev,int &ans){
        if(!root) return;
        helper(root->left,prev,ans);
        if(prev!=INT_MIN)
        ans=min(ans,abs(root->val-prev));
        prev=root->val;
        helper(root->right,prev,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        int prev=INT_MIN;
        int ans=INT_MAX;
        helper(root,prev,ans);
        return ans;
    }
};