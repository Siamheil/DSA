class Solution {
public:
    int maxDiameter = 0;
    
    int depth(Node* node) {
        if (!node) return 0;
        int left = depth(node->left);
        int right = depth(node->right);
        maxDiameter = std::max(maxDiameter, left + right);
        return 1 + std::max(left, right);
    }
    
    int diameter(Node* root) {
        depth(root);
        return maxDiameter;
    }
};