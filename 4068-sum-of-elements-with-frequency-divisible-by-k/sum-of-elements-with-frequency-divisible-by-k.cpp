class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto& it : nums) {
            mp[it]++;
        }
        int result = 0;
        for (auto it : mp) {
            if (it.second % k == 0)
                result += it.first * it.second;
        }
        return result;
    }
};