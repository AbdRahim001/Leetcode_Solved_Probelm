class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (s.size() != words.size())
            return false;
        int j = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[i][0] != s[i])
                return false;
        }
        return true;
    }
};