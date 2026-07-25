class Solution {
public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();

        int d;
        if (arr[0] < arr[1])
            d = min(arr[1] - arr[0], arr[n - 1] - arr[n - 2]);
        else
            d = max(arr[1] - arr[0], arr[n - 1] - arr[n - 2]); // negative for descending

        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int expected = arr[0] + mid * d;

            if (arr[mid] == expected)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (low == n)
            return arr[n - 1] + d;

        return arr[0] + low * d;
    }
};