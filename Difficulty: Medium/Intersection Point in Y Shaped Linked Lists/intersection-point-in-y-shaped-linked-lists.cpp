/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node* curr1=head1;
        Node* curr2=head2;
        int count1=0;
        int count2=0;
        while(curr1){
            count1++;
            curr1=curr1->next;
        }
        while(curr2){
            count2++;
            curr2=curr2->next;
        }
        curr1=head1,curr2=head2;
        while(count1>count2){
            curr1=curr1->next;
            count1--;
        }
        while(count2>count1){
            curr2=curr2->next;
            count2--;
        }
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr1;
        if(!curr1) return NULL;
    }
};
