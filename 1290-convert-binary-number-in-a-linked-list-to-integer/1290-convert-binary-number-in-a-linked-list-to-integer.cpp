class Solution {
public:
    int binaryToDecimal(vector<int>& arr) {
    int ans = 0;
    for (int bit : arr) {
        ans = ans * 2 + bit;
    }
    return ans;
}
    int getDecimalValue(ListNode* head) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        return binaryToDecimal(arr);
    }
};