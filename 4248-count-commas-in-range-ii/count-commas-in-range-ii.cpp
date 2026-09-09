class Solution {
public:
    long long countCommas(long long n) {
    long long result = 0;
    long long threshold = 1000;

    while (threshold <= n) {
        result += (n - threshold + 1);
        threshold *= 1000;
    }

    return result;

    }
};