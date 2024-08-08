/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//using map
    ListNode *detectCycle(ListNode *head) {
        //base case
        if(head == NULL)return NULL;

        //create map
        unordered_map<ListNode*, bool>visited;

        //create temporary Node to store head
        ListNode* temp = head;

        while(temp!=NULL)
        {
            //cycle present
           if ( visited.find(temp) != visited.end())
              return temp;

            //else
            visited[temp]=true;
            temp = temp ->next;
        }
        return NULL;
        
    }
};
/*
 TC and SC :O(n)
 */



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

}//TC :O(n) and SC :O(1)


