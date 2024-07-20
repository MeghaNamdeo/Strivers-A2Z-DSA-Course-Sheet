Time Complexity: O(N) where N is the number of nodes in the Binary Tree. 
Space Complexity: O(1) as no additional data structures or memory is allocated.


bool MirrorTree(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2)
{
   if(root1==NULL&&root2==NULL)return true;
   else  if(root1==NULL||root2==NULL)return false;
   else if(root1!=NULL&&root2!=NULL)
   {
       return (root1->data == root2->data)&&
     MirrorTree(root1->left,root2->right)&&MirrorTree(root1->right,root2->left);

   }
    
        
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    if (root == NULL)
        return true;
    
    return MirrorTree(root->left,root->right);
        
}
/*
TC : O(n)
SC : O(1)
*/