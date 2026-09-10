/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int>ans;
        // if(root == NULL) return ans;
        queue<Node*>q;
        if(root !=NULL) q.push(root);
        while(q.size()>0){
            Node* front = q.front();
            q.pop();
            ans.push_back(front->data);
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right);
        }
        return ans;
    }
};