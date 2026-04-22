class Solution {
public:
    int sumDigit(int x) {
        int temp = 0;
        while (x != 0) {
            temp += x % 10;
            x /= 10;
        }
        return temp;
    }
    int addDigits(int num) {
        while (num > 9) {
            num = sumDigit(num);
        }
        return num;
    }
};