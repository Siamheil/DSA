class Solution {
  public:
    vector<int> merge(Node* root1, Node* root2) {
    vector<int> result;
    stack<Node*> s1, s2;
    Node *cur1 = root1, *cur2 = root2;

    auto pushLefts = [](stack<Node*>& s, Node* node){
        while (node) { s.push(node); node = node->left; }
    };

    pushLefts(s1, cur1);
    pushLefts(s2, cur2);

    while (!s1.empty() || !s2.empty()) {
        if (s2.empty() || (!s1.empty() && s1.top()->data <= s2.top()->data)) {
            Node* n = s1.top(); s1.pop();
            result.push_back(n->data);
            pushLefts(s1, n->right);
        } else {
            Node* n = s2.top(); s2.pop();
            result.push_back(n->data);
            pushLefts(s2, n->right);
        }
    }
    return result;

    }
};