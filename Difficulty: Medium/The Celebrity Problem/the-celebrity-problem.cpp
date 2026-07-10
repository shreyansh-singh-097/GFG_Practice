class Solution {
public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            bool row = true;
            bool col = true; // Row check -> Celebrity kisi ko nahi janta
            for (int j = 0; j < n; j++) {
                if (i != j && mat[i][j] == 1) {
                    row = false;
                    break;
                }
            } // Column check -> Sab celebrity ko jante hain
            for (int j = 0; j < n; j++) {
                if (i != j && mat[j][i] == 0) {
                    col = false;
                    break;
                }
            }
            if (row && col)
                return i;
        }
        return -1;
    }
};