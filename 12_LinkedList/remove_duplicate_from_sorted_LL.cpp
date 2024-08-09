
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)return NULL;
        ListNode* curr= head;
        while(curr!=NULL)
        {
            if(curr->next!=NULL&&curr->val==curr->next->val)
            {
                ListNode* next_next = curr->next->next;
                ListNode* deletedNode= curr->next;
                delete (deletedNode);
                curr->next=next_next;
            }
            else
            {
                curr=curr->next;
            }
        }
        return head;
    }
};
/* TC : O(n),SC:O(1)*/