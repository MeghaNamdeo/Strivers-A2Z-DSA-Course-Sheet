#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

Node()
{
   this-> data =0;
   Node* next=NULL;
   
    
}
Node(int data)
{
   this-> data =data;
   Node* next=NULL;
   
    
}
};

void printLL(Node*  head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void insert_head(Node* &head,int data)
{//step 1: create a new node
    Node* newNode= new Node(data);
    if(head==NULL)
    {
        head=newNode;
    }
    
        
    //step 2:Set new node's next to current head
        newNode->next=head;
    //step 3:Now head is newNode
        head=newNode;
    
    
}

void insert_tail(Node* &head,int data)
{//step 1: create a new node
    Node* newNode= new Node(data);
    if(head==NULL)
    {
        head=newNode;
    }
    
        
    else {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        
    }
    
}
int len(Node*&head)
{
    int l=1;
    Node*temp = head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l; 
}
Node * insert(Node * head,  int pos, int data) {
   Node* newNode = new Node(data);
   if (pos == 1) {
        insert_head(head,data);
    }
    else if(pos==len(head))
    {
        insert_tail(head,data);
    }
    else{

       int i =1;
       Node* prev = head;
       while(i<pos)
       {
           prev=prev->next;
           i++;
       }
       Node* curr= prev->next;
       
       newNode->next=curr;  
       prev->next= newNode;

       


   }
   return head;
}
int main()
{
   Node* first = new Node(10);
   Node*second = new Node(20); 
   Node* third= new Node(30);
   Node* fourth = new Node(40);
   Node* fifth = new Node(50);
   
   first->next=second;
   second->next=third;
   third->next=fourth;
   fourth->next=fifth;
   
   cout<<"original  LinkedList: "<<endl;
   printLL(first);
//   cout<<"\nInsert at Head in LinkedList: "<<endl;
//   insert_head(first,90);
//   printLL(first);
   cout<<"\nInsert at tail in LinkedList: "<<endl;
   insert_tail(first,1400);
   printLL(first);
   cout<<"\nInsert at positoin LinkedList: "<<endl;
   insert(first,5,89);
   printLL(first);

    return 0;
}
/*
output :
Original LinkedList:
10 20 30 40 50

Insert at tail in LinkedList:
10 20 30 40 50 1400

Insert at position 5 in LinkedList:
10 20 30 40 89 50 1400

Time Complexity: O(n), where n is the number of nodes in the linked list.
Space Complexity: O(n)*/

