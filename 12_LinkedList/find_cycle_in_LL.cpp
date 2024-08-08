//tortoise approach or Floyd Cycle detection algorithm

bool detectCycle(Node *head)
{
  if(head == NULL)return false;
Node*fast = head;
Node* slow = head;
 while(fast!=NULL || fast->next!=NULL)
 {
     fast=fast->next->next;
     slow=slow->next;

   if(slow==fast)return true;
 }
     
return false;

}/* TC : O(n)
SC : O(1)
*/


//using map
    bool detectLoop(Node* head) {
        //base case
        if(head == NULL)return false;
        
        //create map
        unordered_map<Node*,bool>visited;
        
        Node* temp = head;
        
        while(temp!=NULL)
        {
            //cycle present
            if(visited[temp]==true)
              return true;
            
            visited[temp]=true;
            temp=temp->next;
        }
        
        return false;
        
        
    }
//TC :O(n) , SC :O(n)