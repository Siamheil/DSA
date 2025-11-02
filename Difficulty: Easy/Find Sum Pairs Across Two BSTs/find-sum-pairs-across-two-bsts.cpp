class Solution {
  public:
    void inorder(Node* root,vector<int>&arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    int countPairs(Node* root1, Node* root2, int x) {
        vector<int>arr1;
        vector<int>arr2;
        inorder(root1,arr1);
        inorder(root2,arr2);
        int i=0,j=arr2.size()-1;
        int count=0;
        while(i<arr1.size()&&j>=0){
            int sum=arr1[i]+arr2[j];
            if(sum==x){
                count++;
                i++;
                j--;
            }else if(sum<x) i++;
            else j--;
        }
        return count;
    }
};