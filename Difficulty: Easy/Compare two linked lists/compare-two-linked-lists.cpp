class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        Node* curr1=head1;
        Node* curr2=head2;
        while(curr1&&curr2){
            if(curr1->data<curr2->data) return -1;
            if(curr1->data>curr2->data) return 1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        if(!curr1&&!curr2) return 0;
        if(curr1) return 1;
        return -1;
        
    }
};