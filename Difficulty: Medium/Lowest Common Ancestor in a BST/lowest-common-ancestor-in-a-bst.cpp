/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        int num1=n1->data,num2=n2->data;
        Node* curr=root;
        while(curr){
            if(curr->data<num1 && curr->data<num2) curr=curr->right;
            else if(curr->data>num1 && curr->data>num2) curr=curr->left;
            else return curr;
        }
        return NULL;
    }
};