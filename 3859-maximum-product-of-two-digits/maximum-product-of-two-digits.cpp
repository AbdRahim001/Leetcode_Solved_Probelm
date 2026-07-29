class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while (n != 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        int low = min(digits[0], digits[1]);
        int high = max(digits[0], digits[1]);
        if (digits.size() < 3)
            return low * high;
        for (int i = 2; i < digits.size(); i++) {
            if (high < digits[i]) {
                low = high;
                high = digits[i];
            } else if (high >= digits[i] && low < digits[i]) {
                low = digits[i];
            }
        }
        return high * low;
    }
};