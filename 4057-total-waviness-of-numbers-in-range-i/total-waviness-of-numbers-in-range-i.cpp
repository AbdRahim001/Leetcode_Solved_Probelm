class Solution {
public:
    int check(int x) {
        vector<int> nums;
        int count = 0;
        while (x) {
            nums.push_back(x % 10);
            x /= 10;
        }
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                count++;
            else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
                count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for (auto i = num1; i <= num2; i++) {
            count += check(i);
        }
        return count;
    }
};