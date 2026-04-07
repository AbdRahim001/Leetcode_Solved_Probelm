class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (s.size() != words.size())
            return false;
        int j = 0;
        for (auto i : words) {
            if (*i.begin() != s[j])
                return false;
            j++;
        }
        return true;
    }
};