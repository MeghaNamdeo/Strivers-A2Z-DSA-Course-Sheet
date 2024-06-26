
#include <iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    Node* prev;
    
    Node()
    {
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
        
    }
     Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
        
    }
};
void printDoublyLL(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int length(Node* &head)
{
    int len =0;
    Node* temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
    
}
void InsertATHead(Node* &head ,Node* &tail , int data )
{
    Node* newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void InsertAtTail(Node* &head, Node* &tail,int data)
{
      Node* newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next=newNode;
        newNode->next=NULL;
        newNode->prev=tail;
        tail=newNode;
    }
    
}
void InsertAtPosition(Node* head,Node* tail,int data, int position)
{
      Node* newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return ;
    }
    else{
        //Doubly linkedlidt empty 
    if(position == 1)
    {
        InsertATHead(head,tail,data);
        return ;
    }
    int l = length(head);
     if (position > l)
    {
        InsertAtTail(head,tail,data);
        return ;
    }
    //insertion in middle
    //step 1 : find previous node and current node 
    
    
        int i=1;
        Node* previousNode=head;
        while(i<position-1)
        {
            previousNode=previousNode->next;
            i++;
        }
         Node* curr= previousNode->next;
    
    
    
    
    
   // step 2 :
   newNode->prev=previousNode;
   previousNode->next= newNode;
   newNode->next=curr;
   curr->prev=newNode;

    }
}
 void deleteAtHead(Node* &head , Node* &tail,  int pos)
 { //if LL is empty
     if(head==NULL)
     {
         return;
     }
     //only one node is present 
    if( head->next == NULL)
    {
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    //delete from head 
    if(pos==1)
    {
         Node* temp = head;
         
         head =temp->next;
         temp->next = NULL;
         head->prev= NULL;
         delete temp;
        
    }
    //delete from tail
    int len = length(head);
    if(pos == len)
    {
        Node* temp = tail;
        tail = temp -> prev;
        tail->next = NULL;
        temp->prev=NULL;
        delete temp;
        
    }
    //delete form middle 
    //step 1 : find prevNode , current node , nextnNode 
    
    
    Node* prevNode= head;
    int i=0;
    while( pos-1 > i)
    {
        prevNode=  prevNode->next;
        i++;
    }
    Node *currentNode = prevNode->next;
    Node *nextnode = currentNode->next;
    prevNode->next = nextnode;
    nextnode->prev = prevNode;
    currentNode->next=NULL;
    currentNode->prev=NULL;
    delete currentNode;
    
     
 }
    
    

int main()
{
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);
   
   first->next=second;
   second->prev=first;
   second->next=third;
   third->prev=second;
     
   cout <<" Original Doubly Linked List :";
    printDoublyLL(first);
   
   cout<<endl <<" Length of Doubly linked List : "<<length(first);
   
   cout<<endl<<"After insert at head  : ";
   InsertATHead(first ,third , 200 );
   printDoublyLL(first);
   
   
   cout<<endl<<"After insert at Tail  : ";
   InsertAtTail(first ,third , 1000 );
   printDoublyLL(first);
   
   cout<<endl<<"Insert at position: ";
   InsertAtPosition(first,third,1900,4);
    printDoublyLL(first);
    
    
    cout << endl<<"Delete at head: ";
    deleteAtHead(first, third,5);
    printDoublyLL(first);
    
    
    
    
    
    return 0;
}
/*
Time Complexity (TC)
Insertion Operations:

Insert at Head (InsertAtHead): TC: O(1)
Insert at Tail (InsertAtTail): TC: O(1)
Insert at Position (InsertAtPosition): TC: O(n)
In the worst case, when inserting at a specific position, you may need to traverse through up to n nodes.
Deletion Operations:

Delete at Head (deleteAtHead): TC: O(1)
Delete at Tail (deleteAtTail): TC: O(1)
Delete at Position (deleteAtPosition): TC: O(n)
In the worst case, when deleting at a specific position, you may need to traverse through up to n nodes.
Length Calculation (length): TC: O(n)

Computing the length requires traversing the entire list once.
Space Complexity (SC)
Overall Space Complexity: SC: O(n)
The space complexity is determine
*/