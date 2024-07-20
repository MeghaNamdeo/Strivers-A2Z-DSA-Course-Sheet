

int height(TreeNode<int> *root) {
    if (root == NULL) return 0;
    int leftH = height(root->left);
    int rightH = height(root->right);
    return max(leftH, rightH) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root) {
    if (root == NULL) return 0;
    int leftD = diameterOfBinaryTree(root->left);
    int rightD = diameterOfBinaryTree(root->right);
    int includeRoot = height(root->left) + height(root->right);
    return max(leftD, max(rightD, includeRoot));
}
/*
 TC and SC : O(n)
 where n is the number of nodes in the binary tree.
 */


 // Function to return the diameter of a Binary Tree.
    int height(Node* root)
    {
        if(root == NULL)return 0;
        int leftH = height(root->left);
        int rightH = height(root->right);
        return max(leftH,rightH)+1;
    }
    int diameter(Node* root) {
        if(root == NULL)return 0;
        int leftD = diameter(root->left);
        int rightD = diameter(root->right);
        int rootD = height(root->left)+height(root->right)+1;
        return max(leftD,max(rightD,rootD));
        
    }