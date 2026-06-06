class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length() - 1;
        stack<char> st;
        for (int i = len; i >= 0; i--) {
            if (s[i] != ' ') {
                st.push(s[i]);
                if (i==0 || s[i - 1] == ' ')
                    break;
            }
        }
        return st.size();
    }
};