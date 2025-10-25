/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* root, int key) {
        //  code  here
        if(!root){
            Node* temp=new Node(key);
            return temp;
        }
        if(root->data<key)
        root->right=insert(root->right,key);
        else
        root->left=insert(root->left,key);
        return root;
    }
};