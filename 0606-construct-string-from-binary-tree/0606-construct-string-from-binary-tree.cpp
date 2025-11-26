class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==NULL) return "";
        string result=to_string(root->val);
        string LEFT=tree2str(root->left);
        string RIGHT=tree2str(root->right);
        if(root->left == NULL && root->right==NULL) return result;
        if(root->left==NULL) return result+"()"+"("+RIGHT+")";
        if(root->right==NULL) return result+"("+LEFT+")";
        return result+"("+LEFT+")"+"("+RIGHT+")";
    }
};