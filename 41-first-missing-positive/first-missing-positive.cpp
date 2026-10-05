class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        auto lastelement = prev(mp.end());
        int lastkey = lastelement->first;
        if (lastkey <= 0)
            return 1;
        int ans = -1;
        for (int i = 1; i <= lastkey; i++) {
            auto it = mp.find(i);
            if (it == mp.end()) {
                return i;
                ans = i;
            }
        }
        if (ans == -1)
            return lastkey + 1;
        return ans;
    }
};