/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        stack<int>st;
        Node* temp=head;
        while(temp!=NULL){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL && !st.empty()){
            temp->data=st.top();
            temp=temp->next;
            st.pop();
        }
        return head;
    }
};