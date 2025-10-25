/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    void helper(Node* root,vector<int>&ans){
        if(!root) return;
        helper(root->left,ans);
        ans.push_back(root->data);
        helper(root->right,ans);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int>ans;
        helper(root,ans);
        int n=ans.size();
        return ans[n-k];
    }
};