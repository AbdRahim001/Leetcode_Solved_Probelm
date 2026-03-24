class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        for (int i = 2; i < len; i++) {
            if (*(arr1.end() - 1) > *(arr2.end() - 1)) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};