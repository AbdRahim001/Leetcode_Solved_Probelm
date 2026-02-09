class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int total = 0, j = 0;
        for (int i = 0; i < nums.size() / 2; i++) {
            total += min(nums[j], nums[j + 1]);
            j += 2;
        }
        return total;
    }
};