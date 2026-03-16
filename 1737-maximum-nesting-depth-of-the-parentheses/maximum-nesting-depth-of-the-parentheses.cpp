class Solution {
public:
    int maxDepth(string s) {
        int x = 0, count = 0, result = 0;
        while (x != s.size()) {
            if (s[x] == '(') {
                count++;
                x++;
            }

            else if (s[x] == ')') {
                count--;
                x++;
            } else {
                x++;
            }
            result = max(count, result);
        }
        return result;
    }
};