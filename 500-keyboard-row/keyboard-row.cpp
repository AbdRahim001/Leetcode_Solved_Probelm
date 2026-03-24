class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> words_cpy = words;
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        vector<string> result;

        for (int i = 0; i < words.size(); i++) {
            map<int, int> mp1;
            map<int, int> mp2;
            map<int, int> mp3;

            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] >= 'A' && words[i][j] <= 'Z')
                    words[i][j] += 32;
                auto it1 = find(s1.begin(), s1.end(), words[i][j]);
                auto it2 = find(s2.begin(), s2.end(), words[i][j]);
                auto it3 = find(s3.begin(), s3.end(), words[i][j]);

                if (it1 != s1.end()) {
                    mp1[words[i][j]]++;
                } else if (it2 != s2.end()) {
                    mp2[words[i][j]]++;
                } else if (it3 != s3.end()) {
                    mp3[words[i][j]]++;
                }
            }
            int a = 0, b = 0, c = 0;
            for (auto i : mp1)
                a += i.second;
            for (auto i : mp2)
                b += i.second;
            for (auto i : mp3)
                c += i.second;

            if (a == words[i].size() || b == words[i].size() ||
                c == words[i].size()) {
                result.push_back(words_cpy[i]);
            }
        }
        return result;
    }
};