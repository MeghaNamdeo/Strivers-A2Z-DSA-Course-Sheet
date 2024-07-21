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



class Solution {
  public:
    //using iterative approach

    int minValue(Node* root) {
      Node* temp = root;
      while(temp->left!=NULL)
      {
          temp=temp->left;
      }
      return temp->data;
    }
};/*
TC: O(n)
SC: O(1)
*/