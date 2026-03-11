class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        string n_temp = "";
        while (n > 0) {
            if (n % 2 != 0) {
                n_temp += '1';
            } else {
                n_temp += '0';
            }
            n /= 2;
        }
        reverse(n_temp.begin(), n_temp.end());

        for (int i = 0; i < n_temp.size(); i++) {
            if (n_temp[i] == '0') {
                n_temp[i] = '1';
            } else {
                n_temp[i] = '0';
            }
        }

        int num = 0;
        int len = n_temp.size();
        for (int i = 0; i < len; i++) {
            if (n_temp[i] == '1') {
                num += 1 * pow(2, len - 1 - i);
            }
        }
        return num;
    }
};