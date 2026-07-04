class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int len = nums.size();
        if (len == 1)
            return true;
        int start = 0;
        int end = len - 1;
        int mid = (start + end) / 2;
        int leftCheck = mid - 1;
        int rightCheck = mid + 1;
        while (leftCheck != 0 || rightCheck != len - 1) {
            if (nums[leftCheck] == nums[mid] || nums[rightCheck] == nums[mid])
                return false;
            leftCheck--;
            rightCheck++;
        }
        if (nums[leftCheck] == nums[mid] || nums[rightCheck] == nums[mid])
            return false;
        return true;
    }
};