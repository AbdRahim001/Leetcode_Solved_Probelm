class Solution {
public:
    int countSegments(string s) {
        int n = s.size();
        if (n == 0)
            return 0;
        int count = 0;
        string S = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                S.push_back(s[i]);
            } else if (!S.empty()) {
                S = "";
                count++;
            }
        }
        if (!S.empty())
            count++;
        return count;
    }
};