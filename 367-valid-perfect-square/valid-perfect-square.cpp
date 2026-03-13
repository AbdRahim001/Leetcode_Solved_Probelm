class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low = 0, high = num, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            long long int x = mid * mid;
            if (x == num) {
                return true;
            } else if (x < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};