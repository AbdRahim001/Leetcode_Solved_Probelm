//--TC->O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int len = nums.size();
        int total = len * (len + 1) / 2;
        return total-sum;
    }
};