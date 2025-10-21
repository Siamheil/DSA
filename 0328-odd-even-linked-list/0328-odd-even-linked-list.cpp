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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            ans.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp) ans.push_back(temp->val);
        temp=head->next;
        while(temp!=NULL && temp->next!=NULL){
            ans.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp) ans.push_back(temp->val);
        temp=head;
        int i=0;
        while(temp){
            temp->val=ans[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};