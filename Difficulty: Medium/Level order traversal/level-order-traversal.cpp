/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int levelsize=q.size();
            vector<int>currlevel;
            for(int i=0;i<levelsize;i++){
                Node* temp=q.front();
                q.pop();
                currlevel.push_back(temp->data);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(currlevel);
        }
        return ans;
    }
};