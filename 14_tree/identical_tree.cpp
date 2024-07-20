bool isIdentical(Node *r1, Node *r2)
    {
        //base case
       if(r1==NULL&&r2==NULL)return true;
       if(r1== NULL || r2==NULL) return false;
        
      
       if(r1!=NULL && r2!=NULL){
           return (r1->data == r2->data)&&isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);
       }
       
       
    }
/*
Time Complexity: O(N+M) where N is the number of nodes in the first Binary Tree and M is the number of nodes in the second Binary Tree. This complexity arises from visiting each node of the two binary nodes during their comparison.

Space Complexity: O(1) as no additional space or data structures is created that is proportional to the input size of the tree. O(H) Recursive Stack Auxiliary Space : The recursion stack space is determined by the maximum depth of the recursion, which is the height of the binary tree denoted as H. In the balanced case it is log2N and in the worst case (its N).
*/