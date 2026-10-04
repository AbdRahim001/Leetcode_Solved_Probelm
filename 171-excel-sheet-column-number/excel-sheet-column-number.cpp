class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int ans = 0;
        int j = 0;
        for (int i = len - 1; i >= 0; i--) {
            int temp = columnTitle[i] - 'A' + 1;
            ans += temp * pow(26, j);
            j++;
        }
        return ans;
    }
};