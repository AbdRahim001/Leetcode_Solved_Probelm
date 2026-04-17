class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int a, b = 0;
        for (auto i : mp) {
            if (b < i.second) {
                a = i.first;
                b = i.second;
            }
        }
        return a;
    }
};