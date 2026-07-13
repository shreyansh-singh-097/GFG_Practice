class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<long long> st;
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == 0 || st.count(sum))
                return true;
            st.insert(sum);
        }
        return false;
    }
};