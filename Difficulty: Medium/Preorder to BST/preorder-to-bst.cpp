// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
  public:
    Node* helper(int pre[], int &index, int size, int lower, int upper) {
        if (index == size || pre[index] < lower || pre[index] > upper)
            return NULL;

        Node* root = new Node;
        root->data = pre[index];
        root->left = root->right = NULL;
        index++;

        root->left = helper(pre, index, size, lower, root->data);
        root->right = helper(pre, index, size, root->data, upper);
        return root;
    }

    Node* Bst(int pre[], int size) {
        int index = 0;
        return helper(pre, index, size, INT_MIN, INT_MAX);
    }
};
