class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            int high = nums[0];
            int low = nums[i];
            for (int j = 0; j <= i; j++) {
                high = max(nums[j], high);
            }
            for (int j = i; j < nums.size(); j++) {
                low = min(low, nums[j]);
            }
            if (high - low <= k) {
                return i;
            }
        }
        return -1;
    }
};