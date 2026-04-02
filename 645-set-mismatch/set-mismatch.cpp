class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        int len = nums.size();
        int total = len * (len + 1) / 2;
        int k;
        int sum = 0;
        for (auto i : mp) {
            if (i.second > 1)
                k = i.first;
            sum += i.first;
        }
        return {k, (total - sum)};
    }
};