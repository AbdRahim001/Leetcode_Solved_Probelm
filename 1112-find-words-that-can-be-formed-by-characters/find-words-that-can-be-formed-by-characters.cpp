class Solution {
public:
    bool checkALL(string s, vector<int> chars_freq) {
        vector<int> s_freq(26, 0);
        for (auto i : s) {
            s_freq[i - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (s_freq[i] != 0 && s_freq[i] > chars_freq[i])
                return false;
        }
        return true;
    }
    int countCharacters(vector<string>& words, string chars) {
        vector<int> chars_freq(26, 0);
        for (auto i : chars) {
            chars_freq[i - 'a']++;
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