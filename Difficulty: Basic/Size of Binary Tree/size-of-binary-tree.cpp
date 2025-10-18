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
    void sizeofbt(Node* node,int& count){
        if(node==NULL) return;
        count++;
        sizeofbt(node->left,count);
        sizeofbt(node->right,count);
    }
    int getSize(Node* node) {
        // code here
        int count=0;
        sizeofbt(node,count);
        return count;
    }
};