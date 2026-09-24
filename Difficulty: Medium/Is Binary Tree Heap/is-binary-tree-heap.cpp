/*
class Node {
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
*/

class Solution {
public:
    int size(Node* root) {
        if (root == NULL)
            return 0;
        return 1 + size(root->left) + size(root->right);
    }
    bool isCBT(Node* root, int index, int n) {
        if (root == NULL)
            return true;
        if (index >= n)
            return false;
        return isCBT(root->left, 2 * index + 1, n) &&
               isCBT(root->right, 2 * index + 2, n);
    }
    bool isMaxHeap(Node* root) {
        if (root == NULL)
            return true;
        if (root->left && root->data < root->left->data)
            return false;
        if (root->right && root->data < root->right->data)
            return false;
        return isMaxHeap(root->left) && isMaxHeap(root->right);
    }
    bool isHeap(Node* tree) {
        int n = size(tree);
        return isCBT(tree, 0, n) && isMaxHeap(tree);
    }
};
