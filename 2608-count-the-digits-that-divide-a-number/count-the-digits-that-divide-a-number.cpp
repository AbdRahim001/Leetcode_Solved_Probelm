class Solution {
public:
    int countDigits(int num) {
        int n = num;
        vector<int> v;
        while (n != 0) {
            v.push_back(n % 10);
            n /= 10;
        }
        int count = 0;
        for (auto i : v) {
            if (num % i == 0) {
                count++;
            }
        }
        return count;
    }
};