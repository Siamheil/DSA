/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        
        Node *newNode=new Node(val);
        if(pos==1){
            newNode->next=head;
            head=newNode;
            return head;
        }
        Node*currNode=head;
        for(int i=1;i<pos-1 && currNode!=NULL ;i++){
            currNode=currNode->next;
        }
        if(currNode!=NULL){
            newNode->next=currNode->next;
            currNode->next=newNode;
        }
        return head;
    }
};