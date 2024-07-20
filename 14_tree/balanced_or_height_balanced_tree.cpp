class Solution{
    public:
    int Height(Node* root)
    {
        if(root==NULL)return 0;
        int leftHeight=Height(root->left);
        int rightHeight=Height(root->right);
        return max(leftHeight, rightHeight) +1;
        
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL)return true;
        int leftHeight=Height(root->left);
        int rightHeight=Height(root->right);
        if(abs(leftHeight-rightHeight)>1)return false;
         return isBalanced(root->left) && isBalanced(root->right);
    }
};
/*
TC : O(n)
SC : O(n) */ 
