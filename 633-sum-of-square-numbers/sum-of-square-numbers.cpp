class Solution {
public:
    bool judgeSquareSum(int c) {
        int start = 0;
        int end = sqrt(c);
        while (start <= end) {
            if ((long long)start * start + end * end == c)
                return true;
            else if ((long long)start * start + end * end > c)
                end--;
            else
                start++;
        }
        return false;
    }
};