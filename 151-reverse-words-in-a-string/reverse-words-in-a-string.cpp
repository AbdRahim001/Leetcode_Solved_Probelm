class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> words;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] != ' ')
                word += s[i];
            else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty())
            words.push_back(word);
        reverse(words.begin(), words.end());
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++)
                result.push_back(words[i][j]);
            if (i != words.size() - 1)
                result.push_back(' ');
        }
        return result;
    }
};