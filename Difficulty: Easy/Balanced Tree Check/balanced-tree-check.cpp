/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root,bool &valid){
        if(root==NULL) return 0;
        int L=height(root->left,valid);
        int R=height(root->right,valid);
        if(abs(L-R)>1) valid=0;
        return 1+max(L,R);
    }
    bool isBalanced(Node* root) {
        // code here
        bool valid=1;
        height(root,valid);
        return valid;
    }
};