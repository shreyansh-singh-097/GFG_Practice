class Solution {
  public:
  
    void solve(int n, vector<int> &ans){
        ans.push_back(n);
        
        if(n <= 0)
            return;
            
        solve(n - 5, ans);
        
        ans.push_back(n);
    }
  
    vector<int> pattern(int n) {
        vector<int> ans;
        
        if(n <= 0){
            ans.push_back(n);
            return ans;
        }
        
        solve(n, ans);
        
        return ans;
    }
};