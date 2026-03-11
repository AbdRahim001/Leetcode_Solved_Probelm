class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        auto it = unique(nums.begin(), nums.end());

        nums.erase(it, nums.end());
        if (k >= nums.size())
            return nums;
        else {
            vector<int> result;
            copy(nums.begin(), nums.begin() + k, back_inserter(result));
            return result;
        }
    }
};