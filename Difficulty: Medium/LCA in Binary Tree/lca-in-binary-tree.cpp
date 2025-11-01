class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        if(!root) return NULL;
        if(root->data==n1 || root->data==n2) return root;
        Node* leftLCA=lca(root->left,n1,n2);
        Node* rightLCA=lca(root->right,n1,n2);
        if(leftLCA && rightLCA) return root;
        else if(leftLCA) return leftLCA;
        else return rightLCA;
    }
};