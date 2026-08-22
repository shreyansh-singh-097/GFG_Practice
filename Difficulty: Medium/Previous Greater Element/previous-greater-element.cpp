class Solution {
public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(n);
        stack<int> s;
        for(int i = 0; i < n; i++) {
            while(!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
            if(s.empty())
                v[i] = -1;
            else
                v[i] = s.top();
            s.push(arr[i]);
        }
        return v;
    }
};