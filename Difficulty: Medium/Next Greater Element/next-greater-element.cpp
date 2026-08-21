class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int>s;
        vector<int>v(n);
        v[n-1] = -1;
        s.push(arr[n-1]);
        for(int i = n-2; i>=0;i--){
            while(s.size()>0 && s.top()<=arr[i])
                s.pop();
                if(s.size()==0) v[i] = -1;
                else v[i] = s.top();
                    s.push(arr[i]);
        }
        return v;
        
    }
};