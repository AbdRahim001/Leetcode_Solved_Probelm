class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int> vct;
        if (n == 0) {
            vct.push_back(0);
        } else {
            while (n > 0) {
                vct.push_back(n % 10);
                n /= 10;
            }
            reverse(vct.begin(), vct.end());
        }
        if (vct[0] == x) {
            return false;
        }
        auto it = find(vct.begin(), vct.end(), x);
        if (it != vct.end()) {
            return true;
        }
        return false;
    }
};