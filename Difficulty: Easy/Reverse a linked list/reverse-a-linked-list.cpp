/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        vector<int>ans;
        Node* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        int i=ans.size()-1;
        Node* curr=head;
        while(curr!=NULL){
            curr->data=ans[i];
            curr=curr->next;
            i--;
        }
        return head;
    }
};