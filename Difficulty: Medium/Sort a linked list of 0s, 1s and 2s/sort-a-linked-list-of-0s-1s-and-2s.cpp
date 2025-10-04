/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int count0=0;
        int count1=0;
        int count2=0;
        Node *temp=head;
        while(temp){
            if(temp->data==0) count0++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->data==1) count1++;
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->data==2) count2++;
            temp=temp->next;
        }
        temp=head;
        while(count0--){
            temp->data=0;
            temp=temp->next;
        }
        while(count1--){
            temp->data=1;
            temp=temp->next;
        }
        while(count2--){
            temp->data=2;
            temp=temp->next;
        }
        return head;
    }
};