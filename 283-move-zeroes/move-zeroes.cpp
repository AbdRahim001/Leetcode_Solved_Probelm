class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while (len--) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            } else
                i++;
        }
    }
};