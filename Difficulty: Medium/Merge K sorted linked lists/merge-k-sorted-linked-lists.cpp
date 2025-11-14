class Solution {
  public:
    Node* merge2lists(Node* l1,Node *l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->data<=l2->data){
            l1->next=merge2lists(l1->next,l2);
            return l1;
        }else{
            l2->next=merge2lists(l1,l2->next);
            return l2;
        }
        return NULL;
    }
    Node* PartitionAndMerge(int start,int end,vector<Node*>& arr){
        if(start>end) return NULL;
        if(start==end) return arr[start];
        int mid=start+(end-start)/2;
        Node* l1=PartitionAndMerge(start,mid,arr);
        Node* l2=PartitionAndMerge(mid+1,end,arr);
        return merge2lists(l1,l2);
    }
    Node* mergeKLists(vector<Node*>& arr) {
        int k=arr.size();
        return PartitionAndMerge(0,k-1,arr);
        
    }
};