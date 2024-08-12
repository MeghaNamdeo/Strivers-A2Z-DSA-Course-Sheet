class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorderVal;
        inorder(root, inorderVal);
        return inorderBST(0, inorderVal.size() - 1, inorderVal);
    }

    void inorder(TreeNode* root, vector<int>& inorderVal) {
        if (root == NULL) return;
        inorder(root->left, inorderVal);
        inorderVal.push_back(root->val);
        inorder(root->right, inorderVal);
    }

    TreeNode* inorderBST(int start, int end, vector<int>& inorderVal) {
        if (start > end) return NULL;
        int mid = start + (end - start) / 2;
        
        TreeNode* root = new TreeNode(inorderVal[mid]);
        root->left = inorderBST(start, mid - 1, inorderVal);
        root->right = inorderBST(mid + 1, end, inorderVal);
        return root;
    }
};

// TC:O(n) , SC:O(n)