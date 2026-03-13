class Solution {
public:
    int arrangeCoins(int n) {
        long long int low = 0, high = n, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            long long int x = (mid * (mid + 1) / 2);
            if (x == n) {
                return mid;
            } else if (x < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};