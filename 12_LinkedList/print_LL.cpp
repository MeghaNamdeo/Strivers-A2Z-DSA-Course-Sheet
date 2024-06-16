
/*
Input:
LinkedList : 1 -> 2
Output:
1 2
Explanation:
The linked list contains two elements 1 and 2.The elements are printed in a single line.
*/
class Solution
{
    public:
    void display(Node *head)
    {
      Node* temp = head;
      while(temp!=NULL)
      {
          cout<<temp->data<<" ";
          temp = temp->next;
      }
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
   
   cout<<"Print LinkedList: "<<endl;
   printLL(first);

    return 0;
}
/*
Time Complexity: O(n), where n is the number of nodes in the linked list.
Space Complexity: O(n)

//output
Print LinkedList:
10 20 30 40 50
*/

