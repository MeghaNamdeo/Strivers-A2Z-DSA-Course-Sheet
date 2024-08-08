//tortoise approach
class Solution{
    public:
    
    int getMiddle(Node *head)
    { if (head == NULL) return -1;
    
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
       
    }
};//Time Complexity: O(N) ,Space complexity : O(1)

//bruteForce
class Solution {
  public:
    int length(Node* &head)
    {
        int len =0 ;
        Node * temp = head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
        
    }
    int getMiddle(Node* head) {
       int lengthh= length(head);
       int middleEle= lengthh/2;
       Node* temp= head;
       int count = 0;
       while(count<middleEle)
       {
           temp=temp->next;
           count++;
       }
       return temp->data;
    }
};/* TC : O(n)
SC :O(1)
*/