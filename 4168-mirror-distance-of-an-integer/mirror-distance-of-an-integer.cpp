class Solution {
public:
    int rev(int a) {
        int b = 0;
        while (a != 0) {
            b = 10 * b + a % 10;
            a /= 10;
        }
        return b;
    }
    int mirrorDistance(int n) {
        int rev_n = rev(n);
        return abs(n - rev_n);
    }
};