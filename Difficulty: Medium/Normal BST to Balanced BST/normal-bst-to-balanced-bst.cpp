/*Structure of the Node of the BST is as
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
    void inorder(Node* root,vector<int>&ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    
    Node* solve(vector<int>&ans,int l,int r){
        if(l>r) return NULL;
        int mid=l+(r-l)/2;
        Node* root=new Node(ans[mid]);
        root->left=solve(ans,l,mid-1);
        root->right=solve(ans,mid+1,r);
        return root;
    }
    Node* balanceBST(Node* root) {
        // Code here
        vector<int>ans;
        inorder(root,ans);
        int n=ans.size();
        int l=0,r=n-1;
        return solve(ans,l,r);
    }
};