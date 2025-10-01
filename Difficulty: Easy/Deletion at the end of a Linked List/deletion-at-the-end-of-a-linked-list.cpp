/*
class Node {
public:
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
    Node* removeLastNode(Node* head) {
        // code here
        if(head==NULL) return NULL;
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        Node* curr=head;
        while(curr->next->next!=NULL){
            curr=curr->next;
        }
        delete curr->next;
        curr->next=NULL;
        return head;
    }
};