class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";
        string ans = "";
        unsigned int n = static_cast<unsigned int>(num);
        while (n) {
            int temp = n % 16;

            if (temp < 10)
                ans += ('0' + temp);
            else
                ans += ('a' + temp - 10);

            n = n / 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};