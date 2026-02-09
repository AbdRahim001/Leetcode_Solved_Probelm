class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i != j) {
                    result.push_back(nums[i]);
                }
            }
        }
        auto it = unique(result.begin(), result.end());
        result.erase(it, result.end());
        return result;
    }
};