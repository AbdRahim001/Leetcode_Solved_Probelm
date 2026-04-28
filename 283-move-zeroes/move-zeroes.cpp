class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        bool swapped;
        for (int i = 0; i < len - 1; i++) {
            swapped = false;
            for (int j = 0; j < len - 1 - i; j++) {
                if (nums[j] == 0) {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
};