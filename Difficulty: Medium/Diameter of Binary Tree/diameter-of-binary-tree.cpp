/* Structure of binary tree Node 
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

    int dia = 0;

    int height(Node* root) {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        dia = max(dia, left + right);

        return 1 + max(left, right);
    }

    int diameter(Node* root) {
        height(root);
        return dia;
    }
};