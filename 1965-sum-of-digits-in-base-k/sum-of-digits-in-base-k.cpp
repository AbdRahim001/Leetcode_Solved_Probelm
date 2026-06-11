class Solution {
public:
    int sumBase(int n, int k) {
        if (k == 10) {
            int sum = 0;
            while (n != 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        } else {
            int sum = 0;
            while (n != 0) {
                int temp = n % k;
                sum += temp;
                n = (n - temp) / k;
            }
            return sum;
        }
    }
};