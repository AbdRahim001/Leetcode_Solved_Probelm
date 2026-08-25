class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int i = 1;
        while (mp[i * k] != 0) {
            i++;
        }
        return i * k;
    }
};