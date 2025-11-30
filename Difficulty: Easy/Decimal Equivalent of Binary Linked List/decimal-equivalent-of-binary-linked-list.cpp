class Solution {
  public:
    long long unsigned int binarytodecimal(vector<int>&arr){
        int ans=0;
        for(int bit:arr){
            ans=(ans*2+bit)%1000000007;
        }
        return ans;
    }
    long long unsigned int decimalValue(Node *head) {
        vector<int>arr;
        Node* curr=head;
        while(curr){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        return binarytodecimal(arr);
    }
};