class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        vector<int> ans;
        int len = mp.size();
        while (len--) {
            int mnVal = 100000;
            int mnKey;
            for (auto i : mp) {
                if (mnVal > i.second ||
                    (mnVal == i.second && mnKey < i.first)) {
                    mnVal = i.second;
                    mnKey = i.first;
                }
            }
            ans.insert(ans.end(), mnVal, mnKey);
            mp.erase(mnKey);
        }
        return ans;
    }
};