class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int pivot = floor(n / 2);
        int left = 0;
        int right = n - 1;
        int result = 0;
        while (left < right) {
            result +=
                abs(nums[pivot] - nums[left]) + abs(nums[pivot] - nums[right]);
            left++;
            right--;
        }
        return result;
    }
};