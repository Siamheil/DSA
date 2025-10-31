class Solution {
  public:
    int minDiff(Node *root, int K) {
        int mindifference=INT_MAX;
        Node* curr=root;
        while(curr){
            int diff=abs(curr->data-K);
            if(diff<mindifference) mindifference=diff;
            if(K<curr->data) curr=curr->left;
            else if(K>curr->data) curr=curr->right;
            else return 0;
        }
        return mindifference;
    }
};