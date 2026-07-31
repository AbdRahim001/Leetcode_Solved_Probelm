class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int mxFreq = 0;
        for (auto i : mp) {
            mxFreq = max(mxFreq, i.second);
        }
        int totalFreq = 0;
        for (auto i : mp) {
            if (i.second == mxFreq) {
                totalFreq += i.second;
            }
        }
        return totalFreq;
    }
};