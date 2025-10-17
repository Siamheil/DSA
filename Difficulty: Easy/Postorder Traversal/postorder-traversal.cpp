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
    void post(Node* root,vector<int>&ans){
        if(root==NULL) return;
        post(root->left,ans);
        post(root->right,ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        post(root,ans);
        return ans;
    }
};