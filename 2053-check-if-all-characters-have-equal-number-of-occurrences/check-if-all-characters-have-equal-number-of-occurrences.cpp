class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp;
        for (auto i : s) {
            mp[i]++;
        }
        int check = mp[s[0]];
        for (auto i : mp) {
            if (i.second != check)
                return false;
        }
        return true;
    }
};