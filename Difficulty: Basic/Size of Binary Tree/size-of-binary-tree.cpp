/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        if(!root) return 0;
        return 1+getSize(root->right)+getSize(root->left);
    }
};