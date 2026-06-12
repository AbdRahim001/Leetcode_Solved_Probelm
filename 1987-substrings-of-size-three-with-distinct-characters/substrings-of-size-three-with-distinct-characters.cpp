class Solution {
public:
    int countGoodSubstrings(string s) {
        vector<string> vct;
        int len = s.size();
        for (int i = 0; i < len - 2; i++) {
            string z;
            for (int j = i; j < i + 3; j++) {
                z.push_back(s[j]);
            }
            vct.push_back(z);
            z = "";
        }
        int count = 0;
        for (auto i : vct) {
            map<char, int> mp;
            for (auto j : i) {
                mp[j]++;
            }
            bool flag = false;
            for (auto k : mp) {
                if (k.second > 1)
                    flag = true;
            }
            if (!flag)
                count++;
            mp.clear();
        }
        return count;
    }
};