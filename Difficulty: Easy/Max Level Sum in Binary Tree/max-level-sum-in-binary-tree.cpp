/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        if(!root) return 0;
        queue<Node*>que;
        int maxSum=INT_MIN;
        que.push(root);
        while(!que.empty()){
            int sum=0;
            int n=que.size();
            while(n--){
            Node* temp=que.front();
            que.pop();
            sum=sum+temp->data;
            if(temp->left) que.push(temp->left);
            if(temp->right) que.push(temp->right);
            }
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};
