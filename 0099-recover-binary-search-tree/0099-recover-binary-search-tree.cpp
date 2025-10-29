class Solution {
public:
    void inorder(TreeNode*root,vector<TreeNode*>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root);
        inorder(root->right,arr);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>arr;
        inorder(root,arr);
        TreeNode* first=NULL,*second=NULL;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]->val>arr[i+1]->val){
                if(!first) first=arr[i];
                second=arr[i+1];
            }
        }
        if(first&&second) swap(first->val,second->val);
    }
};