class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        if(!root) return NULL;
        root->left=RemoveHalfNodes(root->left);
        root->right=RemoveHalfNodes(root->right);
        if(!root->left && !root->right) return root;
        if(root->left && !root->right) return root->left;
        if(!root->left && root->right) return root->right;
        return root;
    }
};