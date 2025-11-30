class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL){
            head=head->next;
            return head;
        }
        else{
            Node* curr=head;
            while(curr->next->next!=NULL){
                curr=curr->next;
            }
            curr->next=NULL;
        }
        return head;
    }
};