class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int oddcount = 0, evencount = 0;
        for (auto i : mp) {
            if (i.second % 2 == 0 || i.second > 1) {
                evencount += i.second / 2;
            }
            if (i.second % 2 != 0 || i.second == 1) {
                oddcount++;
            }
        }
        return {evencount, oddcount};
    }
};