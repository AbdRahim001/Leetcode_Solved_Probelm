//// Solved In-Place
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (i % 2 == 0 && nums[i] % 2 != 0) {
                for (int j = i + 1; j < len; j++) {
                    if (j % 2 != 0 && nums[j] % 2 == 0) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            } else if (i % 2 != 0 && nums[i] % 2 == 0) {
                for (int j = i + 1; j < len; j++) {
                    if (j % 2 == 0 && nums[j] % 2 != 0) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
        }
        return nums;
    }
};