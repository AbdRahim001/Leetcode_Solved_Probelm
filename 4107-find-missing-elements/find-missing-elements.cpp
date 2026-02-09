class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        // creating a array of entire range of nums
        sort(nums.begin(), nums.end());

        result.push_back(nums.front());
        int i = nums.front() + 1;
        while (result.back() != nums.back()) {
            result.push_back(i);
            i++;
        }
        // then check which element are present, if present then erase
        for (int i = 0; i < nums.size(); i++) {
            bool signal = false;
            int loc;

            for (int j = 0; j < result.size(); j++) {
                if (nums[i] == result[j]) {
                    signal = true;
                    loc = j;
                    break;
                }
            }
            if (signal) {
                result.erase(result.begin() + loc);
            }
        }
        return result;
    }
};