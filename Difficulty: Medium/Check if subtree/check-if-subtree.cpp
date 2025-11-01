class Solution {
  public:
    bool isidentical(Node* T, Node* S) {
        if (!T && !S) return true;
        if (!T || !S) return false;
        return T->data == S->data &&
               isidentical(T->left, S->left) &&
               isidentical(T->right, S->right);
    }

    bool isSubTree(Node* T, Node* S) {
        if (!S) return true;  
        if (!T) return false;
        if (isidentical(T, S)) return true;
        return isSubTree(T->left, S) || isSubTree(T->right, S);
    }
};