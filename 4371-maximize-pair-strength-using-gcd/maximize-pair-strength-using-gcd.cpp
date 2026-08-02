class Solution {
public:
    int GCD(int x, int y) {
        while (y) {
            int t = x % y;
            x = y;
            y = t;
        }
        return x;
    }
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                long long g = GCD(nums[i], nums[j]);
                long long temp = 1LL * nums[i] * nums[j] / (g * g);
                ans = max(ans, temp);
            }
        }

        return ans;
    }
};