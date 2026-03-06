class Solution {
public:
    int findGCD(vector<int>& nums) {
        int high = *max_element(nums.begin(), nums.end());
        int low = *min_element(nums.begin(), nums.end());
        return __gcd(high, low);
    }
};