Node* kReverse(Node* head, int k) {
    //base case
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* nextNode = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(nextNode != NULL) {
        head -> next = kReverse (nextNode,k);
    }
    
    //step3: return head of reversed list
    return prev;

    
}//TC :O(n)
//SC:O(1)