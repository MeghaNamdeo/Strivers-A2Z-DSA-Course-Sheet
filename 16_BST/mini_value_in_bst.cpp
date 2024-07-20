//using inorder 
class Solution {
  public:
    int ans = INT_MAX;
    void inorder(Node* root)
    {
        if(root==NULL)
        {
            return ;
        }
        
        inorder(root->left);
        
        ans = min(ans,root->data);
        
        inorder(root->right);
       
    }
    int minValue(Node* root) {
        
     inorder(root);
     
     return ans;
    }
};
/*
TC : O(n)
SC : O(n)
*/