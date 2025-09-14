/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *newNode = new Node(x);
        if (head == NULL) {
            return newNode;
        }
        Node *tail = head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
        
        return head;
    }
};
