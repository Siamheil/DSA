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
    void helper(TreeNode* root,int& count){
        if(root==NULL) return;
        count++;
        helper(root->left,count);
        helper(root->right,count);
    }
    int countNodes(TreeNode* root) {
        int count=0;
        helper(root,count);
        return count;
    }
};