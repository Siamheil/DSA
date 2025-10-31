class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *x) {
        Node* curr=root;
        int successor=-1;
        while(curr){
            if(curr->data>x->data){
                successor=curr->data;
                curr=curr->left;
            }else{
                curr=curr->right;
            }
        }
        return successor;
    }
};