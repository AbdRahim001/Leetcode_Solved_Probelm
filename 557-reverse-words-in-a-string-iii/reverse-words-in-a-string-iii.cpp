class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ')
                right++;
            if (s[i] == ' ' || i + 1 == len) {
                reverse(s.begin() + left, s.begin() + right);
                left = i + 1;
                right++;
            }
        }
        return s;
    }
};