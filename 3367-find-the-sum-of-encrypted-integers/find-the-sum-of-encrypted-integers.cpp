class Solution {
public:
    int encrypt(int x) {
        if (x > 0 && x < 10) {
            return x;
        }
        int temp, time = 0, mxDigit = 0;
        while (x != 0) {
            temp = x % 10;
            mxDigit = max(mxDigit, temp);
            x /= 10;
            time++;
        }
        int Temp = 0;
        for (int i = 0; i < time; i++) {
            Temp = Temp * 10 + mxDigit;
        }
        return Temp;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = encrypt(nums[i]);
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};