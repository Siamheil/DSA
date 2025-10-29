class Solution {
  public:
    TNode* solve(vector<int>&arr,int l,int r){
        if(l>r) return NULL;
        int mid=l+(r-l+1)/2;
        TNode* root=new TNode(arr[mid]);
        root->left=solve(arr,l,mid-1);
        root->right=solve(arr,mid+1,r);
        return root;
    }
    TNode *sortedListToBST(LNode *head) {
        vector<int>arr;
        LNode* temp=head;
        while(temp){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        int l=0,r=arr.size()-1;
        return solve(arr,l,r);
    }
};