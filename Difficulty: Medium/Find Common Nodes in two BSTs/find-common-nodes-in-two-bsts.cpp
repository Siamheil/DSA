class Solution {
  public:
    void inorder(Node* r,vector<int>&arr){
        if(!r) return;
        inorder(r->left,arr);
        arr.push_back(r->data);
        inorder(r->right,arr);
    }
    vector<int> findCommon(Node *r1, Node *r2) {
        vector<int>arr1;
        vector<int>arr2;
        inorder(r1,arr1);
        inorder(r2,arr2);
        vector<int>ans;
        int i=0,j=0;
        while(i<arr1.size()&&j<arr2.size()){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }else if(arr1[i]<arr2[j]) i++;
            else j++;
        }
        return ans;
    }
};