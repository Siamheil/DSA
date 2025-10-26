// Function to search a node in BST.
class Solution {

  public:
    int floor(Node* root, int x) {
        // Code here
        Node* curr=root;
        int ceil=-1;
        while(curr){
            if(curr->data==x){
                ceil=curr->data;
                return ceil;
            }
            if(curr->data<x){
                ceil=curr->data;
                curr=curr->right;
            }else{
                curr=curr->left;
            }
        }
        return ceil;
    }
};