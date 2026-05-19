class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleSum = 0;
        int multipleSum = 0;
        int k = nums.size();
        for (int i = 0; i < k; i++) {
            if (nums[i]<10)
                singleSum += nums[i];
            else
                multipleSum += nums[i];
        }
        if (singleSum != multipleSum)
            return true;
        return false;
    }
};