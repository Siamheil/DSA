/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void preorderhelper(Node* root,vector<int>&ans){
        if(root==NULL) return;
        ans.push_back(root->data);
        preorderhelper(root->left,ans);
        preorderhelper(root->right,ans);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        preorderhelper(root,ans);
        return ans;
    }
};