class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> mp1;
        for (auto i : nums) {
            mp1[i]++;
        }
        unordered_map<int, int> mp2;
        for (auto i : mp1) {
            mp2[i.second]++;
        }
        int a;
        for (auto i : mp1) {
            if (i.second == 1) {
                a = i.first;
                break;
            }
        }
        for (auto i : nums) {
            if (mp2[mp1[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};