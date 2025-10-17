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
    void preorderhelper(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        ans.push_back(root->val);
        preorderhelper(root->left,ans);
        preorderhelper(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorderhelper(root,ans);
        return ans;
    }
};