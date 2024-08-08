//iterative approach 
Node* reverseLinkedList(Node *head)
{
   Node* curr = head;
   Node*  prev = NULL;
   while(curr!=NULL)
   {
       Node* nextNode = curr->next;
       curr->next = prev;
       prev=curr;
       curr= nextNode;
      
   }
   return prev;
}
 /* TC : O(n)
 SC : O(1)*/


//recursive approach

void reverse(Node*&head,Node*&curr,Node*&prev)
{
//base case 
   if(curr==NULL)
   {
       head = prev;
       return;
   }

//one case 
   Node* nextNode=curr->next;
   reverse(head,nextNode,curr);
   curr->next=prev;


}
Node* reverseLinkedList(Node *head)
{
   
   //one case
   Node *curr=head;
   Node* prev =NULL;

   reverse(head,curr,prev);
   return head;
  
}
 /* TC : O(n)
 SC : O(1)*/


//recursive approach 2


Node* reverseLinkedList(Node *head)
{
   
   //base case
   if(head == NULL || head ->next ==NULL)
   return head;

   //one case
   Node* smallhead= reverseLinkedList(head->next);
   head->next->next=head;
   head->next=NULL;

   
   return smallhead;
  
}
 /* TC : O(n)
 SC : O(1)*/
