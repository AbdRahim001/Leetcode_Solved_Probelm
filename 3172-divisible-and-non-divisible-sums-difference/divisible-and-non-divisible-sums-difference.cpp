class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = (n * (n + 1) / 2);
        int num2 = 0;
        int i = 1, temp = 0;
        while (m * i <= n) {
            temp = m * i;
            num2 += temp;
            i++;
        }
        return num1 - 2 * num2;
    }
};