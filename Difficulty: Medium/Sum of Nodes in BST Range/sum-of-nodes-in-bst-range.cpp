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
    void inorder(Node* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    int nodeSum(Node* root, int l, int r) {
        // code here
        vector<int>arr;
        inorder(root,arr);
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=l && arr[i]<=r){
                sum+=arr[i];
            }
        }
        return sum;
    }
};
