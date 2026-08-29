class Solution {
public:
    bool checkALL(string s, map<char, int> mp) {
        map<char, int> sMap;
        for (int i : s) {
            sMap[i]++;
        }
        for (auto i : sMap) {
            if (mp[i.first] < i.second)
                return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> chars_freq;
        for (auto i : chars) {
            chars_freq[i]++;
        }
        int ans = 0;
        for (auto i : words) {
            if (checkALL(i, chars_freq)) {
                ans += i.length();
            }
        }
        return ans;
    }
};