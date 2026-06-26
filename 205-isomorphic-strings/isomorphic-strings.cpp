class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        unordered_set<char> used_char;
        for (int i = 0; i < s.length(); i++) {
            auto it = mp.find(s[i]);
            if (it == mp.end()) {
                if (used_char.count(t[i]))
                    return false;
                mp[s[i]] = t[i];
                used_char.insert(t[i]);
            } else if (it->second != t[i])
                return false;
        }
        return true;
    }
};