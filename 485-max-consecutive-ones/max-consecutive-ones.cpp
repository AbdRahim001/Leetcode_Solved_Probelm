class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int j = 0;
        for (auto i : nums) {
            if (i == 1) {
                j++;
            } else if (i == 0) {
                j = 0;
            }
            count = max(count, j);
        }
        return count;
    }
};