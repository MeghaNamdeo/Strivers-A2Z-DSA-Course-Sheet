
/*
Input:
LinkedList : 1 -> 2
Output:
1 2
Explanation:
The linked list contains two elements 1 and 2.The elements are printed in a single line.
*/
class Solution
{
    public:
    void display(Node *head)
    {
      Node* temp = head;
      while(temp!=NULL)
      {
          cout<<temp->data<<" ";
          temp = temp->next;
      }
    }
};

