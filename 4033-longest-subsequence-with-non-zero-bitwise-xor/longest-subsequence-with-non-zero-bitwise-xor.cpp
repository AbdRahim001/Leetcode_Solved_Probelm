class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool flag = false;
        for (auto i : nums) {
            xr ^= i;
            if (i > 0) {
                flag = true;
            }
        }
        if (xr != 0)
            return nums.size();
        else if (xr == 0 && flag)
            return nums.size() - 1;
        else
            return 0;
    }
};