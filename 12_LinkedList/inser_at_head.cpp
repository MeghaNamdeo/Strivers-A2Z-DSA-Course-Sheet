Node* insertAtFirst(Node* list, int newValue) {
    //step 1
   Node* newnode = new Node(newValue);
   //step 2
   newnode ->next = list;
   //step 3
   list = newnode;

}

