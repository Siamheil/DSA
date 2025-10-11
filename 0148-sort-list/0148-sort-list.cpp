/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        ListNode* curr=head;
        vector<int>ans;
        while(curr){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        curr=head;
        int i=0;
        while(curr){
            curr->val=ans[i];
            curr=curr->next;
            i++;
        }
        return head;
    }
};