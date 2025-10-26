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
    TreeNode* helper(vector<int>& preorder,int lower,int upper,int& index){
        if(index==preorder.size()||preorder[index]<lower||preorder[index]>upper)
        return NULL;
        TreeNode* root=new TreeNode(preorder[index++]);
        root->left=helper(preorder,lower,root->val,index);
        root->right=helper(preorder,root->val,upper,index);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return helper(preorder,INT_MIN,INT_MAX,index);
    }
};