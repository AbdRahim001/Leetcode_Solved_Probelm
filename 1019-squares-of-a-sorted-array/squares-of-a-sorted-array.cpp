class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left = 0, right = nums.size() - 1;
        int pos = right;
        while (left <= right) {
            int left_square = nums[left] * nums[left];
            int right_square = nums[right] * nums[right];
            if (left_square > right_square) {
                ans[pos--] = left_square;
                left++;
            } else {
                ans[pos--] = right_square;
                right--;
            }
        }
        return ans;
    }
};