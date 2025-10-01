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
    bool isPalindrome(ListNode* head) {
        vector<int>ans;
        ListNode* temp1=head;
        while(temp1!=NULL){
            ans.push_back(temp1->val);
            temp1=temp1->next;
        }
        ListNode* temp2=head;
        int i=ans.size()-1;
        while(temp2!=NULL){
            temp2->val=ans[i];
            temp2=temp2->next;
            i--;
        }
        vector<int>reverse;
        ListNode * temp3=head;
        while(temp3!=NULL){
            reverse.push_back(temp3->val);
            temp3=temp3->next;
        }
        return (ans==reverse);
    }
};