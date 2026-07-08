class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int>ans(n,0);
        stack<int>sh;
        for(int i = 0;i< n;i++){
            while(sh.size()>0 && sh.top()>=arr[i]){
                sh.pop();
            }
            if(sh.empty()){
                ans[i] = -1;
            }
            else {
                ans[i] = sh.top();
            }
            sh.push(arr[i]);
        }
        return ans;
    }
};