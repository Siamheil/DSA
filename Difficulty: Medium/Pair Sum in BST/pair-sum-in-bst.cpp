/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void helper(Node* root,vector<int>&ans){
        if(!root) return;
        helper(root->left,ans);
        ans.push_back(root->data);
        helper(root->right,ans);
    }
    bool findTarget(Node *root, int target) {
        vector<int>ans;
        helper(root,ans);
        int n=ans.size();
        int start=0,end=n-1;
        while(start<end){
            int sum=ans[start]+ans[end];
            if(sum==target) return true;
            else if(sum<target) start++;
            else end--;
        }
        return false;
    }
};