class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501, 0);
        for (auto i : arr) {
            freq[i]++;
        }
        int mxfreq = -1;
        for (int i = 1; i < freq.size(); i++) {
            if (freq[i] == i) {
                mxfreq = max(mxfreq, i);
            }
        }
        return mxfreq;
    }
};