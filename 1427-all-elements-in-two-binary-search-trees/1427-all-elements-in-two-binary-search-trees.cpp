class Solution {
public:
    void inorder(TreeNode* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>arr1;
        vector<int>arr2;
        inorder(root1,arr1);
        inorder(root2,arr2);
        vector<int>ans;
        int i=0,j=0;
        while(i<arr1.size()&&j<arr2.size()){
            if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i++]);
            }else{
                ans.push_back(arr2[j++]);
            }
        }
        while(i<arr1.size()) ans.push_back(arr1[i++]);
        while(j<arr2.size()) ans.push_back(arr2[j++]);
        return ans;
    }
};