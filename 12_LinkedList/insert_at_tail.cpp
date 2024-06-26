class Solution {
public:
    // Function to insert a node at the beginning of the linked list.
    Node* insertAtBegining(Node* head, int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
    
    // Function to insert a node at the end of the linked list.
    Node* insertAtEnd(Node* head, int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        return head;
    }
};
//or
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

    return 0;
}
/*
output :
Original LinkedList: 
10 20 30 40 50 

Insert at tail in LinkedList: 
10 20 30 40 50  1400

Time Complexity: O(n), where n is the number of nodes in the linked list.
Space Complexity: O(n)*/

