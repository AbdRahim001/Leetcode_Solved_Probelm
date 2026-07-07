class Solution {
public:
    int maximum69Number(int num) {
        int copy = num;
        bool flag = false;
        vector<int> nums;
        while (num != 0) {
            nums.push_back(num % 10);
            num /= 10;
        }
        reverse(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 6) {
                flag = true;
                nums[i] = 9;
                break;
            }
        }
        if (!flag)
            return copy;
        for (int i = 0; i < nums.size(); i++) {
            num = 10 * num + nums[i];
        }
        return num;
    }
};