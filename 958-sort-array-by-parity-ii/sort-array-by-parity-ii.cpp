class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 0);
        int evenflag = 0, oddflag = 1;
        for (int i = 0; i < len; i++) {
            if (nums[i] % 2 == 0) {
                ans[evenflag] = nums[i];
                evenflag += 2;
            } else {
                ans[oddflag] = nums[i];
                oddflag += 2;
            }
        }
        return ans;
    }
};