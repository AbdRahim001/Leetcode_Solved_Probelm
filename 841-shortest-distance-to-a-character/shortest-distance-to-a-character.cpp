class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;

        for (int i = 0; i < s.size(); i++) {
            int left = i, right = i;
            int count = 0;
            while (left >= 0 || right <= s.size() - 1) {
                if (left >= 0 && s[left] == c) {
                    ans.push_back(count);
                    break;
                }
                if (right <= s.size() - 1 && s[right] == c) {
                    ans.push_back(count);
                    break;
                }
                count++;
                if (left >= 0)
                    left--;
                if (right <= s.size() - 1)
                    right++;
            }
        }
        return ans;
    }
};