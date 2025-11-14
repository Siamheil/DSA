class Solution {
public:
    ListNode* merge2lists(ListNode* l1,ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val<=l2->val){
            l1->next=merge2lists(l1->next,l2);
            return l1;
        }else{
            l2->next=merge2lists(l1,l2->next);
            return l2;
        }
        return NULL;
    }
    ListNode* partitionAndMerge(int start,int end,vector<ListNode*>& lists){
        if(start>end) return NULL;
        if(start==end) return lists[start];
        int mid=start+(end-start)/2;
        ListNode* l1=partitionAndMerge(start,mid,lists);
        ListNode* l2=partitionAndMerge(mid+1,end,lists);
        return merge2lists(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k=lists.size();
        if(k==0) return NULL;
        return partitionAndMerge(0,k-1,lists);
    }
};