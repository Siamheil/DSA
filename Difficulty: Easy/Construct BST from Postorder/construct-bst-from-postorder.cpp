/*struct Node
{
    int data;
    Node *left, *right;
};*/

Node* helper(int post[], int &index, int lower, int upper) {
    if (index == -1 || post[index] < lower || post[index] > upper)
        return NULL;
    Node* root = new Node(post[index]);
    index--;
    root->right = helper(post, index, root->data, upper);
    root->left = helper(post, index, lower, root->data - 1);
    return root;
}

Node *constructTree(int post[], int size) {
    int index = size - 1;
    return helper(post, index, INT_MIN, INT_MAX);
}