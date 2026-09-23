/* Structure of binary tree node
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
  vector<Node*>a;
  vector<Node*>b;
  void paths(Node* root, vector<Node*>& arr, int n1,int n2){
      if(root==NULL) return;
      arr.push_back(root);
      if(root->data == n1) a=arr;
      if(root->data == n2) b=arr;
      paths(root->left,arr,n1,n2);
      paths(root->right,arr,n1,n2);
      arr.pop_back();
  }
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        a.resize(0);
        b.resize(0);
        vector<Node*>arr;
        paths(root,arr,n1,n2);
        int i =0 , j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]->data == b[j]->data){
                i++;
                j++;
            }
            else break;
        }
        return a[i-1];
    }
};


