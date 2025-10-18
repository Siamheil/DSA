/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
    if (root == NULL) return -1;
    return 1 + max(height(root->left), height(root->right));
}
};