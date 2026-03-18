class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words,
                                         char separator) {
        vector<string> Words;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            string q;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == separator) {
                    if (q != "") {
                        Words.push_back(q);
                        q.clear();
                    }
                } else {
                    q.push_back(s[j]);
                }
            }
            if (q != "") {
                Words.push_back(q);
            }
        }
        return Words;
    }
};