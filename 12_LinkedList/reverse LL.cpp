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
