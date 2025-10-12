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
        Node* slow=head;
        Node* fast=head;
        for(int i=1;i<=k;i++){
            if(fast==NULL) return -1;
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        return slow ? slow->data : -1;
    }
};