/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
         Node* head = new Node(arr[0]);
         Node* temp = head;
        for (int i = 1; i < arr.size(); i++) {
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = newNode;
        }
        return head;
    }
};