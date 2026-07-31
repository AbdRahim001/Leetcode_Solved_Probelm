class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (auto i : words) {
            mp[i]++;
        }
        vector<string> vct;
        for (int i = 0; i < k; i++) {
            string S;
            int freq = 0;
            for (auto j : mp) {
                if (j.second > freq || (j.second == freq && j.first < S)) {
                    S = j.first;
                    freq = j.second;
                }
            }
            vct.push_back(S);
            mp.erase(S);
        }
        return vct;
    }
};