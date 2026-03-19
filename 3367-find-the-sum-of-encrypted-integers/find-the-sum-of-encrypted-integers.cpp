class Solution {
public:
    int encrypt(int x) {
        string s = to_string(x);
        if (s.size() == 1)
            return x;

        char maxDigit = *max_element(s.begin(), s.end());
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            result = result * 10 + (maxDigit - '0');
        }
        return result;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += encrypt(nums[i]);
        }
        return sum;
    }
};