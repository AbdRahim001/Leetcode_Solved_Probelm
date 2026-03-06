class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int len = nums.size();
        int result = 0;
        for (int i = 0; i < len; i++) {
            if (len % (i + 1) == 0) {
                result += nums[i] * nums[i];
            }
        }
        return result;
    }
};