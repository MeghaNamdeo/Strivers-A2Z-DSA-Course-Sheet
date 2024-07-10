
#include <iostream>
using namespace std;

class Node
{
    public:
    int  data;
    Node* left;
    Node* right;
    
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildTree(Node* root)
{
   cout <<" Enter the data : ";
   int data;
   cin>>data;
   root= new Node(data);
   if(data == -1)
   {
       return NULL;
   }
   cout<<"insert data at left node  "<<data<<" : "<<endl;
   root->left=buildTree(root->left);
   cout<<"insert data at left node  "<<data<<" : " <<endl;
   root->right=buildTree(root->right);
   return root;
   
}
int main()
{
    Node* root = NULL;
    //creating a buildTree
    root=buildTree(root);
   

    return 0;
}