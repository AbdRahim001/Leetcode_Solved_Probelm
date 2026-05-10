// Time Complexity:O(n)
// Space Complexity:O(n)
// In-Place
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int flag = nums.size() - 1;
        for (int i = flag; i >= 0; i--)
            nums.push_back(nums[i]);
        return nums;
    }
};