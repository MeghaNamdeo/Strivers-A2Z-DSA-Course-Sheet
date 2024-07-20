

bool search(Node* root, int x) {
   if(root==NULL)return false;
   if(root->data == x)return true;
   
   return (search(root->left,x)||search(root->right,x));
}
/*
TC and SC : O(n)
*/


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;

        else if (root->val == val)
            return root;

        else if (root->val > val)
            return searchBST(root->left, val);

        else
            return searchBST(root->right, val);
    }
};
/*
TC : O(n)
SC : O(n)
*/