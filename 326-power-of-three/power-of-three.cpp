class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1)
            return false;
        long long int a = 1162261467;
        if (a % n == 0)
            return true;
        else
            return false;
    }
};