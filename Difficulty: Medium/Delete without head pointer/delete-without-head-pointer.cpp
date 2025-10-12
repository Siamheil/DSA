/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* curr) {
        // code here
        curr->data=curr->next->data;
        curr->next=curr->next->next;
    }
};