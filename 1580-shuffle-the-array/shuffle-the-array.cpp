class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> new_nums;
        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            new_nums.push_back(temp);
            int temp1 = nums[n + i];
            new_nums.push_back(temp1);
        }
        return new_nums;
    }
};