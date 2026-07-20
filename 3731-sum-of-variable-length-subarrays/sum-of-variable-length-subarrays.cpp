class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans = {nums[0]};
        for (int i = 1; i < len; i++) {
            int sum = 0;
            for (int j = max(0, i - nums[i]); j <= i; j++)
                sum += nums[j];
            ans.push_back(sum);
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};