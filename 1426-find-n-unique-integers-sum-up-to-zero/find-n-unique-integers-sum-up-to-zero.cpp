class Solution {
public:
    vector<int> sumZero(int n) {
        int m = (n / 2) + 1;
        vector<int> nums;
        while (m-- && m != 0) {
            nums.push_back(m);
            nums.push_back(-m);
        }
        if (n % 2 != 0) {
            nums.push_back(0);
        }
        return nums;
    }
};