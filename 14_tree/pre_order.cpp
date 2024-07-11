void preorderT(Node* root)
{
   
    if(root==NULL)return;
 
 
    cout<<(root->data)<<" ";
    preorderT(root->left);
    preorderT(root->right);
    
}   
   
vector <int> preorder(Node* root)
{
    vector<int>ans;
    preorderT(root);
 
    return ans;
}
/*
 Tc and SC : O(n) */
 