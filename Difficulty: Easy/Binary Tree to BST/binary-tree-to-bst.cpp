class Solution {
  public:
    void inorder(Node* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    void fill(Node* root,vector<int>&arr,int &index){
        if(!root) return;
        fill(root->left,arr,index);
        root->data=arr[index++];
        fill(root->right,arr,index);
    }
    Node *binaryTreeToBST(Node *root) {
        vector<int>arr;
        inorder(root,arr);
        sort(arr.begin(),arr.end());
        int index=0;
        fill(root,arr,index);
        return root;
    }
};