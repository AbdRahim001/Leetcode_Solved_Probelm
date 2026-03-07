class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums;

        if (numRows == 1) {
            nums.push_back({1});
            return nums;
        } else if (numRows == 2) {
            nums.push_back({1});
            nums.push_back({1, 1});
            return nums;
        } else {
            nums.push_back({1});
            nums.push_back({1, 1});
            for (int i = 2; i < numRows; i++) {
                vector<int> vct;
                vct.push_back(1);
                for (int j = 1; j < i; j++) {
                    int temp = nums[i - 1][j - 1] + nums[i - 1][j];
                    vct.push_back(temp);
                }
                vct.push_back(1);
                nums.push_back(vct);
            }
        }
        return nums;
    }
};