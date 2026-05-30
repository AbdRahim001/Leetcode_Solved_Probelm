class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] >= '0' && s[i] <= '9' && !st.empty()) {
                st.pop();
            } else if (s[i] >= 'a' && s[i] <= 'z')
                st.push(s[i]);
        }
        string S = "";
        while (!st.empty()) {
            S.push_back(st.top());
            st.pop();
        }
        reverse(S.begin(), S.end());
        return S;
    }
};