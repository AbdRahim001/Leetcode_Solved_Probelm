class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char, int> mp;
        for (auto i : brokenLetters) {
            mp[i]++;
        }
        int len = text.length();
        bool flag = false;
        int count = 0;
        for (int i = 0; i < len; i++) {
            auto it = mp.find(text[i]);
            if (it != mp.end()) {
                flag = true;
            }
            if (text[i] == ' ') {
                if (flag == false)
                    count++;
                flag = false;
            }
            if (i == len - 1 && flag == false) {
                count++;
            }
        }
        return count;
    }
};