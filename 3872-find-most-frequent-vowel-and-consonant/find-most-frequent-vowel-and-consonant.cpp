class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> vowel;
        map<char, int> consonant;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowel[s[i]]++;
            } else {
                consonant[s[i]]++;
            }
        }
        int v = 0, c = 0;
        for (auto i : vowel) {
            v = max(v, i.second);
        }
        for (auto i : consonant) {
            c = max(c, i.second);
        }
        return v + c;
    }
};