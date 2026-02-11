class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = accumulate(nums.begin(), nums.end(), 0);
        int digSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            while (nums[i] != 0) {
                temp += nums[i] % 10;
                nums[i] /= 10;
            }
            digSum += temp;
        }
        return abs(digSum - eleSum);
    }
};