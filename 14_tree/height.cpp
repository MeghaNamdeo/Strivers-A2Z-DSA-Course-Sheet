 int maxDepth(TreeNode* root) 
        
{
  if(root==NULL)
  return 0;
  int leftHeight=maxDepth(root->left);
  int rightHeight=maxDepth(root->right);
  int ans= max(leftHeight,rightHeight)+1;
  return ans;
}

/*
TC and SC : O(n)

n is number of node 
*/