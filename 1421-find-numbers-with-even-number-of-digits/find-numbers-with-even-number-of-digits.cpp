class Solution {
public:
    int digits(int x) {
        int count = 0;
        while (x != 0) {
            count++;
            x /= 10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto i : nums) {
            if (digits(i) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};