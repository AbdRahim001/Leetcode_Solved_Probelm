class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_char;
        stack<char> t_char;
        int len_s = s.size(), len_t = t.size();
        int len = max(len_s, len_t);
        for (int i = 0; i < len; i++) {
            if (i < len_s && s[i] != '#')
                s_char.push(s[i]);
            if (i < len_t && t[i] != '#')
                t_char.push(t[i]);
            if (i < len_s && s[i] == '#' && !s_char.empty())
                s_char.pop();
            if (i < len_t && t[i] == '#' && !t_char.empty())
                t_char.pop();
        }
        string S, T;
        while (!s_char.empty()) {
            S.push_back(s_char.top());
            s_char.pop();
        }
        while (!t_char.empty()) {
            T.push_back(t_char.top());
            t_char.pop();
        }
        return S == T;
    }
};