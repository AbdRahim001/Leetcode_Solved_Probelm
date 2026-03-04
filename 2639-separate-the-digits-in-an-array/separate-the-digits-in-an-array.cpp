class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            vector<int> digits;
            while (num != 0) {
                digits.push_back(num % 10);
                num /= 10;
            }
            reverse(digits.begin(), digits.end());
            for (auto d : digits) {
                result.push_back(d);
            }
        }

        return result;
    }
};