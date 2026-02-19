class Solution {
public:
    int product(int a) {
        int temp = 1;
        while (a != 0) {
            temp *= a % 10;
            a /= 10;
        }
        return temp;
    }
    int sum(int a) {
        int temp = 0;
        while (a != 0) {
            temp += a % 10;
            a /= 10;
        }
        return temp;
    }
    int subtractProductAndSum(int n) {
        int pd = product(n);
        int sm = sum(n);
        return pd - sm;
    }
};