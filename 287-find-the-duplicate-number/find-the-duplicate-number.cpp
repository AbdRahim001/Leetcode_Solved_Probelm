class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> arr(mx + 1, 0);
        for (int i = 0; i < arr.size(); i++) {
            arr[nums[i]]++;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 1) {
                return i;
            }
        }
        return -1;
    }
};