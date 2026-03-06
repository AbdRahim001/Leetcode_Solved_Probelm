class Solution {
public:
    int findGCD(vector<int>& nums) {
        int high = *max_element(nums.begin(), nums.end());
        int low = *min_element(nums.begin(), nums.end());
        int gcd = low;
        while (high % gcd != 0 || low % gcd != 0) {
            gcd--;
        }
        return gcd;
    }
};