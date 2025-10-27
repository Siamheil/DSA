/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* construct(vector<int>&arr,int l,int r){
        if(l>r) return NULL;
        int mid=l+(r-l)/2;
        Node* root=new Node(arr[mid]);
        root->left=construct(arr,l,mid-1);
        root->right=construct(arr,mid+1,r);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        int l=0,r=arr.size()-1;
        return construct(arr,l,r);
    }
};