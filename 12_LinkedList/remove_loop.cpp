
//using floyd cycle detection Algorithm (Tortoise Approach)
#include <bits/stdc++.h>

 Node* detectCycle(Node *head)
{
    if(head==NULL)return NULL;

    Node*fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL)
    {
     fast=fast->next->next;
     slow=slow->next;

     if(slow==fast)return slow;
    }
    return NULL;
 }
     



Node *firstNode(Node *head)
{
  if(head == NULL)return NULL;

  //create intersection and fast pointer
  Node* intersection  = detectCycle(head);

  if (intersection == NULL) return NULL; // No cycle found
  Node* slow= head;

  

  while(slow!=intersection)
  {
      slow=slow->next;
      intersection=intersection->next;
      
     
  }
  return slow;

}



Node *removeLoop(Node *head)
{
    if(head==NULL)return NULL;

    Node* startLoop=firstNode(head);
    if(startLoop==NULL)return head;
    Node* temp=startLoop;
    while(temp->next!=startLoop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
    
}//TC: O(n)
//SC: O(1)


class Solution {
  public:
  
Node* detectCycle(Node *head)
{
    if(head==NULL)return NULL;

    Node*fast = head;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL)
    {
     fast=fast->next->next;
     slow=slow->next;

     if(slow==fast)return slow;
    }
    return NULL;
 }
     



Node *firstNode(Node *head)
{
  if(head == NULL)return NULL;

  //create intersection and fast pointer
  Node* intersection  = detectCycle(head);
  if (intersection == NULL) return NULL; // No cycle found
  Node* slow= head;

  

  while(slow!=intersection)
  {
      slow=slow->next;
      intersection=intersection->next;
      
     
  }
  return slow;

}


void removeLoop(Node* head)
{
       
    if(head==NULL)return ;

    Node* startLoop=firstNode(head);
    if(startLoop==NULL)return ;
    Node* temp=startLoop;
    while(temp->next!=startLoop)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    
}
};/* TC :O(n)
SC:O(1)
*/
