/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool check(Node* l,Node* r){
        if(!l&&!r) return true;
        if(!l||!r) return false;
        if((l->data==r->data)&&check(l->right,r->left)&&check(l->left,r->right))
        return true;
        return false;
    }
    bool isSymmetric(Node* root) {
        // code here
        if(root==NULL) return true;
        return check(root->left,root->right);
    }
};