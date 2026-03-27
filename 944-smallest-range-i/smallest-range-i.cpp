class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int high = *max_element(nums.begin(), nums.end()) - k;
        int low = *min_element(nums.begin(), nums.end()) + k;
        if (low > high) {
            return 0;
        } else {
            return high - low;
        }
    }
};