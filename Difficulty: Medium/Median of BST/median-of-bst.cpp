/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root,vector<int>&ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    int findMedian(Node* root) {
        // Code here
        vector<int>ans;
        inorder(root,ans);
        int n=ans.size();
        if (n%2==0) return ans[n/2-1];
        else return ans[n/2];
    }
};