class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int len = nums.size();
        if (len < 3)
            return len;
        int mxVal = nums[0];
        int mx = 0;
        int minVal = nums[0];
        int mn = 0;
        for (int i = 1; i < len; i++) {
            if (nums[i] > mxVal) {
                mx = i;
                mxVal = nums[i];
            }
            if (nums[i] < minVal) {
                mn = i;
                minVal = nums[i];
            }
        }
        int bothFront = max(mx, mn) + 1;
        int bothBack = len - min(mx, mn);
        int mnFront_mxBack = mn + 1 + len - mx;
        int mxFront_mnBack = mx + 1 + len - mn;
        return min({bothBack, bothFront, mnFront_mxBack, mxFront_mnBack});
    }
};