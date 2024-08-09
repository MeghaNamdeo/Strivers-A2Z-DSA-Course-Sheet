
class Solution {
public:
    bool CheckPalindrome(vector<int>arr)
    {
        int start =0;
        int end = arr.size()-1;
        while( start <= end)
        {
           if(arr[start]!=arr[end])
           {
            return false;
           }
           start++;
           end--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        //base condition
        if(head == NULL)return false;
        //step 1: create an array
        vector<int>arr;

        //step 2: copy LL value in array
        ListNode* temp = head;
        while( temp!=NULL)
        {
            arr.push_back(temp->val);
            temp = temp -> next;
        }
       //step 4: check palindrome
        return CheckPalindrome(arr);
        
    }
};

/*

CheckPalindrome function:
 Time Complexity: O(n)
 Space Complexity: O(1)

isPalindrome function:
 Time Complexity: O(n)
 Space Complexity: O(n)
*/




    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
    /* TC :O(n)
    SC :O(1)
    */

