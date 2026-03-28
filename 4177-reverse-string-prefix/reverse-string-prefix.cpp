class Solution {
public:
    string reversePrefix(string s, int k) {
        stack<char> sta;
        for (int i = 0; i < k; i++) {
            sta.push(s[i]);
        }
        for (int i = 0; i < k; i++) {
            s[i] = sta.top();
            sta.pop();
        }
        return s;
    }
};