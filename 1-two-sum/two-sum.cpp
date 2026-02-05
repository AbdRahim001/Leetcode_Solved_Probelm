class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int loc1, loc2;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    loc1 = i, loc2 = j;
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        vector<int> vct;
        vct.push_back(loc1);
        vct.push_back(loc2);
        return vct;
    }
};