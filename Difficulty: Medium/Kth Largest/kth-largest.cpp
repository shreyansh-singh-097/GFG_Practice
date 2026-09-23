class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        typedef priority_queue<int,vector<int>,greater<int>> minHeap;
        minHeap pq;
        for(int i =0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<arr.size();i++){
            pq.push(arr[i]);
            pq.pop();
        }
        return pq.top();
    }
};