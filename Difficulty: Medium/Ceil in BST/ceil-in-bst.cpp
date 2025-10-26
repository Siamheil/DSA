class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        Node* curr=root;
        int ceil=-1;
        while(curr){
            if(curr->data==x) {
                ceil=curr->data;
                return ceil;
            }
            if(curr->data<x)
            curr=curr->right;
            else{
                ceil=curr->data;
                curr=curr->left;
            }
        }
        return ceil;
    }
};
