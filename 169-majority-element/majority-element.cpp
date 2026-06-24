class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int candidate = nums[0];
        int count = 1;
        for (int i = 1; i < len; i++) {
            if (count == 0) {
                candidate = nums[i];
            }
            if (nums[i] == candidate) {
                count++;
            } else if (nums[i] != candidate) {
                count--;
            }
        }
        return candidate;
    }
};