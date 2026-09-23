/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
    Node* convert(vector<int>& arr, int low, int high){
        if(low>high) return NULL;
        int mid = (low+high)/2;
        Node* root = new Node(arr[mid]);
        root->left = convert(arr,low,mid-1);
        root->right = convert(arr,mid+1,high);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        return convert(arr, 0,arr.size()-1);
    }
};