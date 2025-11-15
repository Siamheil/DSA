class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        int n=arr.size();
        swap(arr[k-1],arr[n-k]);
        curr=head;
        int i=0;
        while(curr){
            curr->val=arr[i];
            curr=curr->next;
            i++;
        }
        return head;
    }
};