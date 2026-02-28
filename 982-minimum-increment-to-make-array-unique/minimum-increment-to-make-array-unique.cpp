class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = nums.size();
        int operation = 0;
        for (int i = 1; i < k; i++) {
            if (nums[i] <= nums[i - 1]) {
                int temp = nums[i - 1] + 1;
                operation += temp - nums[i];
                nums[i] = temp;
            }
        }
        return operation;
    }
};