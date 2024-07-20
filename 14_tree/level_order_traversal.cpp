class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
            
            
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp=q.front();
            ans.push_back(temp->data);
            q.pop();
            
            if(temp->left)
            {
                q.push(temp->left);
            }
             if(temp->right)
            {
                q.push(temp->right);
            }
        }
        
      return ans;
    }
};/*
Time Complexity (TC): O(n).

Space Complexity (SC):O(w) for level-order traversal, where 

w is the maximum width of the binary tree.

O(h) considering the recursive stack space, where 

h is the height of the binary tree.
*/

//0r


#include <iostream>
#include<queue>
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
void levelOrdertraversal(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    Node* root = NULL;
    //creating a buildTree
    root=buildTree(root);
    //level levelOrdertraversal
    cout<<"print level order traversal : ";
    levelOrdertraversal(root);
   

    return 0;
}


void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}