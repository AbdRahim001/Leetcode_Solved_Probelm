class Solution {
public:
    int minOperations(vector<int>& nums) {
        int k = nums.size();
        int operation = 0;
        for (int i = 0; i < k - 1; i++) {
            if (nums[i + 1] <= nums[i]) {
                int temp = nums[i + 1];
                nums[i + 1] = nums[i] + 1;
                operation += nums[i + 1] - temp;
            }
        }
        return operation;
    }
};