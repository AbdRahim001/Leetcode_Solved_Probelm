class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        long long int x = pow(2, i);
        while (x <= n) {
            x = pow(2, i);
            if (x == n) {
                return true;
            }
            i++;
        }
        return false;
    }
};