class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        Node* curr=head;
        vector<int>arr;
        while(curr){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        int n=arr.size();
        if(k>n) return head;
        swap(arr[k-1],arr[n-k]);
        int i=0;
        curr=head;
        while(curr){
            curr->data=arr[i];
            i++;
            curr=curr->next;
        }
        return head;
    }
};