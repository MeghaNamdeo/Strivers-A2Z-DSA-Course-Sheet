
class Solution {
  public:
     struct Node* reverse( struct Node* head) {
       
       struct Node* curr = head;
       struct Node*  prev = NULL;
       while(curr!=NULL)
      {
       struct Node* nextNode = curr->next;
       curr->next = prev;
       prev=curr;
       curr= nextNode;
      
       }
      return prev;
        
    }
  public:
    void InsertAtTail( struct Node* &head, struct Node* &tail, int val)
    {
        struct Node* newNode =new Node(val);
        if(head == NULL)
        {
          head = newNode;
          tail = newNode;
          return;
        }
        
        else
        {
            tail->next=newNode;
            tail=newNode;
            
        }
        
        
    }
    struct Node* add( Node* first, Node* second)
    {
        int carry =0;
        struct Node* ansHead = NULL;
        struct Node* ansTail = NULL;
        
        while(first != NULL && second != NULL)
        {
            int sum = carry + first -> data + second -> data;
            
            int digit =  sum% 10;
            
            //create node and add in answer LinkedList
            InsertAtTail(ansHead , ansTail , digit);
            
            carry = sum/10;
            
            first= first->next;
            second=second->next;
            
        }
         while(first != NULL)
         {
             int sum = carry+first->data;
             int digit =  sum% 10;
            
            //create node and add in answer LinkedList
            InsertAtTail(ansHead , ansTail , digit);
            carry = sum/10;
            
             first=first->next;
         }
         while(second != NULL)
         {
             int sum = carry+second->data;
             int digit =  sum% 10;
            
            //create node and add in answer LinkedList
            InsertAtTail(ansHead , ansTail , digit);
            carry = sum/10;
            
            second=second->next;
         }
         return ansHead;
         
         
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second) {
       //step 1 : reverse both linked List
       first = reverse(first);
       
       second = reverse(second);
       
       //step 2: add 2 LL
       struct Node* ans = add(first, second);
       
       //step 3: 
       ans = reverse(ans);
       
       return ans;
       
       
    }
};/*
Time Complexity (TC):O(N1+N2), where 

N1 and N2 are the lengths of the two linked lists.

Space Complexity :max O(N1,N2), due to the space needed to store the result linked list.*/


class Solution
{
    private:
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
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct Node* add(struct Node* first, struct Node* second) {
        int carry = 0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(first != NULL || second != NULL || carry != 0) {
            
            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;
                
            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;
            
            
            int sum = carry + val1 + val2;
            
            int digit = sum%10;
            
            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);
            
            carry = sum/10;
            if(first != NULL)
                first = first -> next;
            
            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //step 1 -  reverse input LL
        first = reverse(first);
        second = reverse(second);
        
        //step2 - add 2 LL
        Node* ans = add(first, second);
        
        //step 3 
        ans = reverse(ans);
        
        return ans;
    }
};



class Solution {
  public:
    // Function to add two numbers represented by linked list.
    Node* reverse(Node* curr, Node* prev)
    {
        if(curr==NULL)return prev ;
        
       
        Node* nextNode = curr->next;
        curr->next=prev;
        
        
        return reverse(nextNode ,curr);
        
    }
    Node* addTwoLists(Node* first, Node* second) {
        //reverse first LL
        first = reverse(first,NULL);
        //reverse second LL
        second = reverse(second,NULL);
        
        Node *curr1=first,*curr2=second;
        //create dummy node
        Node* head=new Node(0);
        Node* tail=head;
        int sum,carry=0;
        
        //Addition
        while(curr1&&curr2)
        {
            sum=curr1->data+curr2->data+carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            curr2=curr2->next;
            tail=tail->next;
            carry=sum/10;
            
        }
        //curr1 exist
        while(curr1)
        {
            sum=curr1->data+carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            tail=tail->next;
            carry=sum/10;
            
        }
        //curr2 exist
         while(curr2)
        {
            sum=curr2->data+carry;
            tail->next=new Node(sum%10);
            curr2=curr2->next;
            tail=tail->next;
            carry=sum/10;
            
        }
        //carry exist
         while(carry)
        {
            
            tail->next=new Node(carry%10);
            tail=tail->next;
            carry=carry/10;
            
        }
        
        //reverse LL
        //remove dummy node
        head =reverse(head->next,NULL);
        return head;
        
    }
};//TC:O(n+m),SC:O(n+m)