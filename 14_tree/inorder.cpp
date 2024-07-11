class Solution {
  public:
    void inorderT(Node* root)
   {
   
    if(root==NULL)return;
 
 
    
    inorderT(root->left);
    cout<<(root->data)<<" ";
    inorderT(root->right);
    
   }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
      vector<int>ans;
      inorderT(root);
 
      return ans;

    }
};/* TC : O(n) SC : O(n)*/
