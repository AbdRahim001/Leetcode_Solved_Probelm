class Solution {
public:
    int sumdigit(int x) {
        int temp = 0;
        while (x != 0) {
            temp += x % 10;
            x /= 10;
        }
        return temp;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int k = sumdigit(nums[i]);
            if (k == i)
                return i;
        }
        return -1;
    }
};