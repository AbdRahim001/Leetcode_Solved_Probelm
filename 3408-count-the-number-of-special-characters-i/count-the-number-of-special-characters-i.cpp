class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> freq(26, false);
        vector<bool> FREQ(26, false);
        for (auto i : word) {
            if (i >= 'a' && i <= 'z')
                freq[i - 'a'] = true;
            else
                FREQ[i - 'A'] = true;
        }
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] && FREQ[i])
                count++;
        }
        return count;
    }
};