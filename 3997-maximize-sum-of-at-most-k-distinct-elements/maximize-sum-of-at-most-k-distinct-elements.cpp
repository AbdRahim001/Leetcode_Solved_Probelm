class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int, greater<int>> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        vector<int> result;
        for (auto i : mp) {
            result.push_back(i.first);
        }
        if (k >= result.size()) {
            return result;
        } else {
            return vector<int>(result.begin(), result.begin() + k);
        }
    }
};