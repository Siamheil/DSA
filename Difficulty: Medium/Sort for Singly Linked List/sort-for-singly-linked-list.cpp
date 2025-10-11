/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        // code here
        Node* curr=head_ref;
        vector<int>ans;
        while(curr){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        int i=0;
        curr=head_ref;
        while(curr){
            curr->data=ans[i];
            curr=curr->next;
            i++;
        }
        return head_ref;
    }
};