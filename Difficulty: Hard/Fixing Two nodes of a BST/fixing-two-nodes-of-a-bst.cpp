class Solution {
  public:
    void inorder(Node* root,vector<Node*>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root);
        inorder(root->right,arr);
    }
    void correctBST(Node* root) {
        vector<Node*>arr;
        inorder(root,arr);
        Node* first=NULL,*second=NULL;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]->data>arr[i+1]->data){
                if(!first) first=arr[i];
                second=arr[i+1];
            }
        }
        if(first&&second) swap(first->data,second->data);
    }
};