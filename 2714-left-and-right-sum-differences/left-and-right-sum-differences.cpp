class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> numsleft;
        vector<int> numsright;
        numsleft.push_back(0);
        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            for (int j = i; j >= 0; j--) {
                temp += nums[j];
            }
            numsleft.push_back(temp);
        }
        numsleft.resize(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int temp = 0;
            for (int j = nums.size() - 1; j >= i; j--) {
                temp += nums[j];
            }
            numsright.push_back(temp);
        }
        numsright.erase(numsright.begin());
        numsright.push_back(0);

        vector<int> results;
        for (int i = 0; i < nums.size(); i++) {
            results.push_back(abs(numsright[i] - numsleft[i]));
        }

        return results;
    }
};