class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long int ans = 0;
        for (auto i : nums) {
            ans += i - nums[0];
        }
        return ans;
    }
};