class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int temp = nums[i];
            nums.push_back(temp);
        }
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ' ';
        }
        return nums;
    }
};