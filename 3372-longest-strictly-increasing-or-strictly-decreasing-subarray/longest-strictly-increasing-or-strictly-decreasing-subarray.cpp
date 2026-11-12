class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return 1;
        int increasing = 1, decreasing = 1;
        int mn = 0, mx = 0;
        for (int i = 1; i < n; i++) {
            mx = max(mx, increasing);
            mn = max(mn, decreasing);
            if (nums[i] > nums[i - 1]) {
                increasing++;
                mx = max(mx, increasing);
            } else {
                increasing = 1;
            }
            if (nums[i] < nums[i - 1]) {
                decreasing++;
                mn = max(mn, decreasing);
            } else {
                decreasing = 1;
            }
        }
        return max(mn, mx);
    }
};