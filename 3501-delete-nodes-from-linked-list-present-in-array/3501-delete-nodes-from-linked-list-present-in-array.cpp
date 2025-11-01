class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());
        while(head!=NULL && st.count(head->val)){
            head=head->next;
        }
        ListNode* curr=head;
        while(curr && curr->next){
            if(st.count(curr->next->val)){
                curr->next=curr->next->next;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};