/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root==NULL) return INT_MIN;
        return max(root->data,max(findMax(root->left),findMax(root->right)));
    }

    int findMin(Node *root) {
        if(root==NULL) return INT_MAX;
        return min(root->data,min(findMin(root->left),findMin(root->right)));
    }
};