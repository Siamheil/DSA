// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        if(head==NULL) return head;
        // code here
        vector<int>arr;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data % 2==0) arr.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->data % 2==1) arr.push_back(temp->data);
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp){
            temp->data=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};