class Solution {
public:
    int divide(int dividend, int divisor) {
        if ((long long)dividend / divisor > INT_MAX)
            return INT_MAX;
        return (long long)dividend / divisor;
    }
};