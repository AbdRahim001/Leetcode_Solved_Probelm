class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0, len = 0;
        for (auto i : nums) {
            if (i >= minK && i <= maxK) {
                len++;
                count += len;
            } else
                len = 0;
        }
        return count;
    }
};