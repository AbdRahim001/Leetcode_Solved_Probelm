class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int len = nums.size();
        int count = 0;
        for (int i = 0; i < len; i++) {
            while (nums[i] != 0) {
                int temp = nums[i] % 10;
                if (nums[i] % 10 == digit)
                    count++;
                nums[i] /= 10;
            }
        }
        return count;
    }
};