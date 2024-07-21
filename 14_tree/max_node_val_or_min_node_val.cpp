class Solution
{
public:
int maxi = INT_MIN;
int mini = INT_MAX;
    int findMax(Node *root)
    {
       if(root==NULL)return NULL;
       
        maxi = max(maxi,root->data);
        
        findMax(root->left);
        findMax(root->right);
       
       return maxi;
    }
    int findMin(Node *root)
    {
       if(root==NULL)return NULL;
       
        mini = min(mini,root->data);
        findMin(root->left);
        findMin(root->right);
       
       return mini;
    }
};
/*
TC: O(n)
SC: O(n)
*/