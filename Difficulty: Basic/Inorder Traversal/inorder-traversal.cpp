/* Structure of Binary Tree Node
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
    vector<int> ans;

    void solve(Node* root) {
        if(root == NULL)
            return;
        solve(root->left);
        ans.push_back(root->data);
        solve(root->right);
    }
    vector<int> inOrder(Node* root) {
        solve(root);
        return ans;
    }
};