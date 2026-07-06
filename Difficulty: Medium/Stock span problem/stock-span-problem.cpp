class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>s;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            while(!s.empty() && arr[s.top()] <=arr[i]){
                s.pop();
            }
            if(s.empty()) ans.push_back(i+1);
            else ans.push_back(i-s.top());
            s.push(i);
        }
        return ans;
        }
};