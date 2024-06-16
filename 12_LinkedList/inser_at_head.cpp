Node* insertAtFirst(Node* list, int newValue) {
    //step 1
   Node* newnode = new Node(newValue);
   //step 2
   newnode ->next = list;
   //step 3
   list = newnode;

}

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
{
    
    
    //step 1: create a new node
        Node* newNode= new Node(data);
    //step 2:Set new node's next to current head
        newNode->next=head;
    //step 3:Now head is newNode
        head=newNode;
    
    
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
   cout<<"\nInsert at Head in LinkedList: "<<endl;
   insert_head(first,90);
   printLL(first);

    return 0;
}
/*
output :
Original LinkedList: 
10 20 30 40 50 

Insert at Head in LinkedList: 
90 10 20 30 40 50 

Time Complexity: O(n), where n is the number of nodes in the linked list.
Space Complexity: O(n)*/

