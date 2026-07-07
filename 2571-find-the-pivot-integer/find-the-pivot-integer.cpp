class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1)
            return 1;
        vector<int> nums;
        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
        }
        for (int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }
        int high = nums[n - 1];
        for (int i = 0; i < n - 1; i++) {
            if (high - nums[i] == nums[i + 1]) {
                return i + 2;
            }
        }
        return -1;
    }
};