/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root ==NULL) return -1;
        int l = height(root->left);
        int R = height(root->right);
        return 1+ max(l,R);
    }
};