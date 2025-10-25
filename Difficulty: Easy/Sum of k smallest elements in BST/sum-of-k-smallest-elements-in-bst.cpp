// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1
void inorder(Node* root,int&k,int &ans){
    if(!root||k==0) return;
    inorder(root->left,k,ans);
    if(k>0){
        ans+=root->data;
        k--;
    }
    inorder(root->right,k,ans);
}
int sum(Node* root, int k) {
    int ans=0;
    inorder(root,k,ans);
    return ans;
    
}