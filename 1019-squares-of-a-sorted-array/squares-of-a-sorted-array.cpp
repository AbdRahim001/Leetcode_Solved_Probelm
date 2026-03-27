class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> st;
        for (auto i : nums) {
            st.insert(i * i);
        }
        nums.erase(nums.begin(), nums.end());
        for (auto i : st) {
            nums.push_back(i);
        }
        return nums;
    }
};