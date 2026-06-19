class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> count;
        int len1 = s1.length();
        int len2 = s2.length();
        string temp = "";
        for (int i = 0; i < len1; i++) {
            if (s1[i] >= 'a' && s1[i] <= 'z') {
                temp.push_back(s1[i]);
            }
            if (s1[i] == ' ' || i == len1 - 1) {
                count[temp]++;
                temp = "";
            }
        }
        temp = "";
        for (int i = 0; i < len2; i++) {
            if (s2[i] >= 'a' && s2[i] <= 'z') {
                temp.push_back(s2[i]);
            }
            if (s2[i] == ' ' || i == len2 - 1) {
                count[temp]++;
                temp = "";
            }
        }
        vector<string> ans;
        for (auto i : count) {
            if (i.second == 1)
                ans.push_back(i.first);
        }
        return ans;
    }
};