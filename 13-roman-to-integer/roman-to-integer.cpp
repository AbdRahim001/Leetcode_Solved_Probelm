class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                             {'C', 100}, {'D', 500}, {'M', 1000}};
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I' && s[i + 1] == 'V') {
                val += 4;
                i++;
            } else if (s[i] == 'I' && s[i + 1] == 'X') {
                val += 9;
                i++;
            } else if (s[i] == 'X' && s[i + 1] == 'L') {
                val += 40;
                i++;
            } else if (s[i] == 'X' && s[i + 1] == 'C') {
                val += 90;
                i++;
            } else if (s[i] == 'C' && s[i + 1] == 'D') {
                val += 400;
                i++;
            } else if (s[i] == 'C' && s[i + 1] == 'M') {
                val += 900;
                i++;
            } else
                val += mp[s[i]];
        }
        return val;
    }
};