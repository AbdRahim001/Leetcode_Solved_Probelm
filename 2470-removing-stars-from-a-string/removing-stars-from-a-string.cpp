class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (auto i : s) {
            if (!st.empty() && i == '*')
                st.pop();
            else if (i != '*')
                st.push(i);
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