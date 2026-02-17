class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> numpos;
        vector<int> numneg;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                numpos.push_back(nums[i]);
            } else {
                numneg.push_back(nums[i]);
            }
        }
        vector<int> result;
        for (int i = 0; i < numpos.size(); i++) {
            result.push_back(numpos[i]);
            result.push_back(numneg[i]);
        }
        return result;
    }
};