class Solution {
public:
    string intToRoman(int num) {
        string s = "";
        vector<int> vct = {1000, 900, 500, 400, 100, 90, 50,
                           40,   10,  9,   5,   4,   1};
        vector<string> str = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                              "XL", "X",  "IX", "V",  "IV", "I"};
        int len = vct.size();
        for (int i = 0; i < len; i++) {
            while (num >= vct[i]) {
                s += str[i];
                num -= vct[i];
            }
        }
        return s;
    }
};