class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int left = 0;
        for (int i = 0; i < len; i++) {
            int right = i;
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};