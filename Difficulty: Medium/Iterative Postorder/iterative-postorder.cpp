// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        if(!root) return ans;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node * temp=st.top();
            st.pop();
            ans.push_back(temp->data);
            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};