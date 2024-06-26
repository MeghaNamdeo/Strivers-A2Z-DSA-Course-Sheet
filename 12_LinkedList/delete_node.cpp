#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        
    }
};
int len(Node* head)
{
    int l= 1;
    Node* temp = head;
    while(temp!=NULL)
    {
        l++;
        temp= temp->next;
        
    }
    return l;
}

void deleteNode(int position , Node* &head, Node* &tail)
{
    //if head is null
    if(head==NULL)
    {
        return ;
    }
    //for deleting first node
    if(position == 1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //for deleting last node 
    if(position == len(head))
    {
        //step 1: find previous 
        int i=1;
        Node* prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        //step 2
        prev->next=NULL;
        //step 3 
        Node* temp=tail;
        //step 5 
        delete temp;
        return;
    }
    //deleting middle Node
    //step : find prev and curr

   int i=1;
   Node* prev= head;
   while(i<position - 1)
   {
       prev=prev->next;
       i++;
       
   }
   Node* curr=prev->next;
   prev->next=curr->next;
   curr->next=NULL;
   delete curr;
   
}

TC:
O(1) (deleting first node)
O(n) (deleting last node)
O(n) (deleting middle node)
SC: O(1)