// Function to return a list containing the inorder traversal of the BST.
void helper(Node* root,vector<int>&ans){
    if(!root) return;
    helper(root->left,ans);
    ans.push_back(root->data);
    helper(root->right,ans);
}
vector<int> inOrder(Node *root) {
    // code here
    vector<int>ans;
    helper(root,ans);
    return ans;
}