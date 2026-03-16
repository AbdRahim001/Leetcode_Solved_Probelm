class Solution {
public:
    int maxDepth(string s) {
        stack<char> sta;
        int len = 0;
        for (auto i : s) {
            if (i == '(') {
                sta.push(i);
            }
            len = max(len, (int)sta.size());
            if (i == ')') {
                sta.pop();
            }
        }
        return len;
    }
};