class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string S;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ') {
                st.push(s[i]);
            }
            if (s[i] == ' ' || i + 1 == len) {
                while (!st.empty()) {
                    S.push_back(st.top());
                    st.pop();
                }
                if (i + 1 != len)
                    S.push_back(' ');
            }
        }
        return S;
    }
};