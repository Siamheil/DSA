/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(head==NULL || head->next==NULL || k==0) return head;
        Node* temp=head;
        int count=1;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0) return head;
        temp->next=head;
        Node* curr=head;
        for(int i=1;i<k;i++){
            curr=curr->next;
        }
        Node* newHead=curr->next;
        curr->next=NULL;
        return newHead;
    }
};