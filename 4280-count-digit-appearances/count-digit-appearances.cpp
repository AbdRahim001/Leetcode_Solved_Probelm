class Solution {
public:
    int digitSum(int n, int digit) {
        int count = 0;
        while (n != 0) {
            int temp = n % 10;
            if (temp == digit)
                count++;
            n /= 10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int len = nums.size();
        int sum = 0;
        for (int i = 0; i < len; i++) {
            sum += digitSum(nums[i], digit);
        }
        return sum;
    }
};