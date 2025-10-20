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
    void dfs(Node *root,int level,vector<int>&ans){
        if(root==NULL) return;
        if(ans.size()<level) ans.push_back(root->data);
        dfs(root->left,level+1,ans);
        dfs(root->right,level+1,ans);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        int level=1;
        dfs(root,level,ans);
        return ans;
    }
};