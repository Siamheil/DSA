/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        vector<int>ans;
        Node* temp1=head;
        while(temp1!=NULL){
            ans.push_back(temp1->data);
            temp1=temp1->next;
        }
        int i=ans.size()-1;
        Node *temp2=head;
        while(temp2!=NULL){
            temp2->data=ans[i];
            temp2=temp2->next;
            i--;
        }
        vector<int>reverse;
        Node *temp3=head;
        while(temp3!=NULL){
            reverse.push_back(temp3->data);
            temp3=temp3->next;
        }
        return (ans==reverse);
    }
};