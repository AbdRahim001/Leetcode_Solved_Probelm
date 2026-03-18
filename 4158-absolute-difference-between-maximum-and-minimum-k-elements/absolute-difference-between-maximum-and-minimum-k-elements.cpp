class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mxSum = 0, mnSum = 0;
        for (int i = 0; i < k; i++) {
            mxSum += nums[nums.size() - i - 1];
            mnSum += nums[i];
        }
        return abs(mxSum - mnSum);
    }
};