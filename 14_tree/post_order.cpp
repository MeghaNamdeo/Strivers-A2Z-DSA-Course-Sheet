void postorderT(Node* root)
{
   
    if(root==NULL)return;
 
 
    
    postorderT(root->left);
    postorderT(root->right);
    cout<<(root->data)<<" ";
    
}   
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
   vector<int>ans;
    postorderT(root);
 
    return ans;
}
/*
 Tc and SC : O(n) */
 