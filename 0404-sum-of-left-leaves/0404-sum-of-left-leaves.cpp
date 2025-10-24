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
    void helper(TreeNode* node,int& sum){
        if(!node) return;
        if(node->left && !node->left->left && !node->left->right)
        sum+=node->left->val;
        helper(node->left,sum);
        helper(node->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum=0;
        helper(root,sum);
        return sum;
    }
};