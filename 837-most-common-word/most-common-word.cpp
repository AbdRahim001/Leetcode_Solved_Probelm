class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> PARAGRAPH;
        int len = paragraph.length();
        string S;
        for (int i = 0; i < len; i++) {
            if ((paragraph[i] >= 'a' && paragraph[i] <= 'z') ||
                (paragraph[i] >= 'A' && paragraph[i] <= 'Z')) {
                if (paragraph[i] >= 'A' && paragraph[i] <= 'Z')
                    S.push_back(paragraph[i] + 32);
                else
                    S.push_back(paragraph[i]);
            } else {
                if (!S.empty()) {
                    PARAGRAPH.push_back(S);
                    S.clear();
                }
            }
        }
        if (!S.empty())
            PARAGRAPH.push_back(S);
        map<string, int> mp;
        for (auto i : PARAGRAPH) {
            mp[i]++;
        }
        if (!banned.empty())
            for (auto i : banned) {
                if (mp.count(i)) {
                    mp.erase(i);
                }
            }
        int highFreq = 0;
        string freqWord;
        for (auto i : mp) {
            if (i.second > highFreq) {
                freqWord = i.first;
                highFreq = i.second;
            }
        }
        return freqWord;
    }
};