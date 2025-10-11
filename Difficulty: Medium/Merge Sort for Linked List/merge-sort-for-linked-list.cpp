/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* mergeSort(Node* head) {
        // code here
        Node* curr=head;
        vector<int>ans;
        while(curr){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        curr=head;
        while(curr){
            curr->data=ans[i];
            curr=curr->next;
            i++;
        }
        return head;
    }
};