class Solution {
public:
    int cubeRoot(int n) {
        int low = 1, high = n;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long cube = 1LL * mid * mid * mid;
            if (cube == n) {
                return mid;
            } 
            else if (cube < n) {
                ans = mid;
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};