/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        int count=0;
        Node *curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        count=count/2;
        curr=head;
        while(count--){
            curr=curr->next;
        }
        return curr->data;
    }
};