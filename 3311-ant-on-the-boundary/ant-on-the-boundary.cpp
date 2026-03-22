class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int pos = 0, count = 0;
        for (auto i : nums) {
            pos += i;
            if (pos == 0) {
                count++;
            }
        }
        return count;
    }
};