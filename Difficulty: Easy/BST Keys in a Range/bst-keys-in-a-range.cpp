class Solution {
  public:
    void inorder(Node* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }

    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>arr;
        inorder(root,arr);
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]>=low && arr[i]<=high){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};