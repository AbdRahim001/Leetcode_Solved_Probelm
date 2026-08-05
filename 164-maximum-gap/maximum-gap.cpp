class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long int maxDifference = -1;
        if (nums.size() < 2) {
            return 0;
        }

        for (long long int i = 0; i < nums.size()-1; i++) {
            if (nums[i + 1] - nums[i] > maxDifference) {
                maxDifference = nums[i + 1] - nums[i];
            }
        }
        return maxDifference;
    }
};