/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void helper(Node* root,int &count){
        if(root==NULL) return;
        if(!root->left && !root->right) {
        count++;
        return;
        }
        helper(root->left,count);
        helper(root->right,count);
    }
    int countLeaves(Node* root) {
        // write code here
        int count=0;
        helper(root,count);
        return count;
    }
};