
#include <iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node()
    {
        this->data  = 0;
        left = NULL;
        right = NULL;
        
    }
    Node(int data)
    {
        this->data  = data;
        left = NULL;
        right = NULL;
        
    }
    
};
Node* insertIntoBST(Node* root,int data)
{
    if(root==NULL)
    {
        //first node to create
        root= new Node();
        root->data = data;
        
        return root;

    }
    if(root->data > data)
    {
        //insert in left
        root->left = insertIntoBST(root->left,data); 
    }
    else
    {
        //insert in right
        root->right= insertIntoBST(root->right,data); 
    }
    return root;
}
void TakeInput(Node*& root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root= insertIntoBST(root,data);
        cin>>data;
    }
        
        
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
void preOrderBST(Node* root)
{
    if(root==NULL)return ;
    cout<<root->data<<" ";
    preOrderBST(root->left);
    preOrderBST(root->right);
}
void postOrderBST(Node* root)
{
    if(root==NULL)return ;
    
    postOrderBST(root->left);
    postOrderBST(root->right);
    cout<<root->data<<" ";
}
void inOrderBST(Node* root)
{
    if(root==NULL)return ;
 
    inOrderBST(root->left);
    cout<<root->data<<" ";
    inOrderBST(root->right);
}

int main()
{
   Node* root = NULL;
   
   cout<<" Enter the data for Node "<<endl;
   TakeInput(root);
   cout<<"printing the BST : "<<endl;
    levelOrderTraversal(root);
   cout << "\nInorder Traversal:" << endl;
    inOrderBST(root);
   
    cout << "\nPostorder Traversal:" << endl;
    postOrderBST(root);
   
    cout << "\nPreorder Traversal:" << endl;
    preOrderBST(root);

    return 0;
}