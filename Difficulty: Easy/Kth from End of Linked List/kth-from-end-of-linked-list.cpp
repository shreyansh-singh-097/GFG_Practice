/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* fast = head;
        Node* slow = head;

        // fast ko k nodes aage le jao
        for(int i = 0; i < k; i++) {
            if(fast == NULL)
                return -1;
            fast = fast->next;
        }

        // dono ko saath move karo
        while(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};