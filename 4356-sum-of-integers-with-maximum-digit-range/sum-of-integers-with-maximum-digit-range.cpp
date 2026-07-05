class Solution {
public:
    int digitRange(int n) {
        int count = 0;
        int mn = 10;
        int mx = -1;
        while (n != 0) {
            int temp = n % 10;
            if (temp > mx)
                mx = temp;
            if (temp < mn)
                mn = temp;
            n /= 10;
        }
        return mx - mn;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<int> range;
        int len = nums.size();
        int sum = 0;
        for (int i = 0; i < len; i++) {
            range.push_back(digitRange(nums[i]));
        }
        int mx = *max_element(range.begin(), range.end());
        for (int i = 0; i < len; i++) {
            if (range[i] == mx) {
                sum += nums[i];
            }
        }
        return sum;
    }
};