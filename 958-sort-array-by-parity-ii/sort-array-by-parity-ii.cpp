//// Solved In-Place
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        int i = 0, j = len - 1;
        while (i < len && j >= 0) {
            if (nums[i] % 2 == 0)
                i += 2;
            else if (nums[j] % 2 == 1)
                j -= 2;
            else
                swap(nums[i], nums[j]);
        }
        return nums;
    }
};