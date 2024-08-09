
//brute force
Node *removeDuplicates(Node *head)
{
    if(head == NULL)return NULL;

    Node* curr= head;
    while(curr!=NULL)
    {
        Node* temp = curr;
        while(temp->next!=NULL)
        {
            if(temp->next->data==curr->data)
            {
                Node* next_next= temp->next->next;
                Node* deleteNode = temp->next;
                delete(deleteNode);
                temp->next=next_next;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr=curr->next;
    }
    return head;
    
}//TC : O(n^2) , SC : O(1)


#include<bits/stdc++.h>
//using map (optimal)
Node *removeDuplicates(Node *head)
{
    if(head == NULL)return NULL;

    unordered_map<int,bool>visited;
    Node* curr= head;
    Node* prev=NULL;
    
    while(curr!=NULL)
    {
       if(visited.find(curr->data)!=visited.end())
       {
           prev -> next = curr -> next;
           delete curr;

       }
       else
       {
           visited[curr->data]=true;
           prev = curr;
       }
       curr= prev->next;

    }
    return head;
    
}//TC : O(n) , SC : O(1)