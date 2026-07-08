class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        int num = 0;
        while (n != 0) {
            int temp = n % 10;
            if (temp != 0) {
                num = num * 10 + temp;
                sum += temp;
            }
            n /= 10;
        }
        int reversed_num = 0;
        while (num != 0) {
            reversed_num = reversed_num * 10 + num % 10;
            num /= 10;
        }
        return (long long) sum * reversed_num;
    }
};