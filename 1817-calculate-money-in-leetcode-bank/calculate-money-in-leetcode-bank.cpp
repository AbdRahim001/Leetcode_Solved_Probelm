class Solution {
public:
    int totalMoney(int n) {
        int rep = (n / 7) * 7 == n ? (n / 7) : (n / 7) + 1;
        int sum = 0;
        int count = 0;
        for (int i = 1; i <= rep; i++) {
            for (int j = i; j < i + 7 && count < n; j++) {
                sum += j;
                count++;
            }
        }
        return sum;
    }
};