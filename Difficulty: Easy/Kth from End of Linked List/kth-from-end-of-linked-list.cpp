/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(k>count) return -1;
        count=count-k;
        Node* curr=head;
        while(count--){
            curr=curr->next;
        }
        return curr->data;
    }
};