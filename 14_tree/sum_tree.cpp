class Solution {
public:
    bool checkTree(TreeNode* root) {
        if (root == NULL || root->left == NULL && root->right == NULL)
            return true;
        return (root->val == root->left->val + root->right->val);
    }
};
/*
Time complexity: O(N)
Space complexity: O(N)
*/