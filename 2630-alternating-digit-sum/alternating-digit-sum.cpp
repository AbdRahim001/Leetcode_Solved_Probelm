class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> vct;
        int count = 0;
        while (n != 0) {
            vct.push_back(n % 10);
            n /= 10;
            count++;
        }
        int ans = 0;
        bool flag = true;
        for (int i = count - 1; i >= 0; i--) {
            if (flag) {
                ans += vct[i];
                flag = false;
            } else {
                ans -= vct[i];
                flag = true;
            }
        }
        return ans;
    }
};