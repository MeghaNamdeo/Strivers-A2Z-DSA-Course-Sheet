class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next !=NULL)
        {
            fast=fast->next->next;
            slow = slow ->next;
            if(fast==slow)return true;
        }
        return false;
    
    }
};//TC : O(n), SC : O(1)