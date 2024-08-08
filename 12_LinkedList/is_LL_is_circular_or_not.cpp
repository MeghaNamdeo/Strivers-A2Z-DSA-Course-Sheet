bool isCircular(Node *head) {
        // Handle edge cases
        if (head == NULL) {
            return false;
        }

        Node* temp = head->next;
        
        while (temp != nullptr && temp != head) {
            temp = temp->next;
        }

        // If loop ends because temp becomes NULL, list is not circular
        

        // else loop ends because temp points back to head, list is circular
        return temp==head;
    }
    tc:O(n)
    sc:O(1)


    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //using map
class Solution {
public:
    bool hasCycle(ListNode *head) {
      unordered_map<ListNode*, bool> visited;
        
        while (head != NULL) {
            if (visited.find(head) != visited.end()) {
                return true;
            }
            
            visited[head] = true;
            head = head->next;
        }
        
        return false;
    }
};
/*The time complexity (TC) and space complexity (SC) of the solution are:

- Time Complexity (TC): O(n)
- Space Complexity (SC): O(n)
*/