class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> mp;
        int count = 0;
        for (auto i : s) {
            mp[i]++;
        }
        for (auto i : t) {
            mp[i]--;
        }
        for (auto i : mp) {
            if (i.second < 0)
                count += i.second;
        }
        return abs(count);
    }
};