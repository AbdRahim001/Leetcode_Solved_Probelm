class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            int temp = 0;
            if (pref.size() <= words[i].size()) {
                for (int j = 0; j < pref.size(); j++) {
                    if (pref[j] == words[i][j]) {
                        temp++;
                    }
                }
                if (temp == pref.size()) {
                    count++;
                }
            }
        }
        return count;
    }
};