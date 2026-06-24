class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int check = floor(len / 3);
        int candidate = nums[0];
        int count = 1;
        vector<int> ans;
        for (int i = 1; i < len; i++) {
            if (candidate == nums[i]) {
                count++;
            } else {
                if (count > check) {
                    ans.push_back(candidate);
                }
                count = 1;
                candidate = nums[i];
            }
        }
        if (count > check) {
            ans.push_back(candidate);
        }
        return ans;
    }
};