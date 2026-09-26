class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        unordered_map<string, string> mp;
        for (int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        int len = s.length();
        bool flag = false;
        string a = "";
        for (int i = 0; i < len; i++) {
            if (s[i] == '(') {
                flag = true;
            } else if (s[i] == ')') {
                flag = false;
                if (mp.find(a) != mp.end()) {
                    ans += mp[a];
                } else {
                    ans += '?';
                }
                a = "";
            } else if (flag) {
                a += s[i];
            } else {
                ans += s[i];
            }
        }
        return ans;
    }
};