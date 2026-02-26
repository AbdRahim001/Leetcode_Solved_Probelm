class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string t;
        for (int i = 0; i < indices.size(); i++) {
            int pos;
            for (int j = 0; j < indices.size();j++) {
                if (i == indices[j]) {
                    pos = j;
                }
            }
            t.push_back(s[pos]);
        }
        return t;
    }
};