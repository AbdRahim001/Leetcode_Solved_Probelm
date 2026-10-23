class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0] * nums[1] * *(nums.end() - 1);
        int b = *(nums.end() - 1) * *(nums.end() - 2) * *(nums.end() - 3);
        return max(a, b);
    }
};