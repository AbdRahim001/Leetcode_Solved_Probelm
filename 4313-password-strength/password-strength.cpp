class Solution {
public:
    int passwordStrength(string password) {
        vector<int> count_small(26, 0);
        vector<int> count_cap(26, 0);
        vector<int> count_num(10, 0);
        vector<int> special(4, 0);
        int count = 0;
        for (auto i : password) {
            if (i >= 'a' && i <= 'z' && count_small[i - 'a'] == 0) {
                count += 1;
                count_small[i - 'a'] = 1;
            } else if (i >= 'A' && i <= 'Z' && count_cap[i - 'A'] == 0) {
                count += 2;
                count_cap[i - 'A'] = 1;
            } else if (i >= '0' && i <= '9' && count_num[i - '0'] == 0) {
                count += 3;
                count_num[i - '0'] = 1;
            } else if (i == '!' && special[0] == 0) {
                count += 5;
                special[0] = 1;
            } else if (i == '@' && special[1] == 0) {
                count += 5;
                special[1] = 1;
            } else if (i == '#' && special[2] == 0) {
                count += 5;
                special[2] = 1;
            } else if (i == '$' && special[3] == 0) {
                count += 5;
                special[3] = 1;
            }
        }
        return count;
    }
};