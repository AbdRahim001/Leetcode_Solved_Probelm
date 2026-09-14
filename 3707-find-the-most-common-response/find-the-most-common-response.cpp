class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int len1 = responses.size();
        for (int i = 0; i < len1; i++) {
            set<string> st;
            for (int j = 0; j < responses[i].size(); j++) {
                st.insert(responses[i][j]);
            }
            responses[i].clear();
            for (auto j : st) {
                responses[i].push_back(j);
            }
            st.clear();
        }
        map<string, int> mp;
        for (auto i : responses) {
            for (auto j : i) {
                mp[j]++;
            }
        }
        int mxFreq = 0;
        for (auto i : mp) {
            mxFreq = max(i.second, mxFreq);
        }
        for (auto i : mp) {
            if (i.second == mxFreq) {
                return i.first;
            }
        }
        return "";
    }
};