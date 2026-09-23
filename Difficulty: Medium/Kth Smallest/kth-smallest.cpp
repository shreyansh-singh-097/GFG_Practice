class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        typedef priority_queue<int,vector<int>,greater<int>> minHeap;
        minHeap pq;
        for(int i =0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        for(int i =1;i<k;i++){
            pq.pop();
        }
        return pq.top();
    }
};