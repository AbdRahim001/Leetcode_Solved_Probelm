class Solution {
public:
    int leftval(vector<int>& nums, int t) {
        int low = 0, high = nums.size() - 1, mid, index = -1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == t) {
                index = mid;
                high = mid - 1;
            } else if (nums[mid] > t) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return index;
    }
    int rightval(vector<int>& nums, int t) {
        int low = 0, high = nums.size() - 1, mid, index = -1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == t) {
                index = mid;
                low = mid + 1;
            } else if (nums[mid] > t) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = leftval(nums, target);
        int right = rightval(nums, target);
        return {left, right};
    }
};