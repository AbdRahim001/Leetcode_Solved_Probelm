class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        if (st.size() < 3)
            return *prev(st.end());
        auto it = st.end();
        it--;
        it--;
        it--;
        return *it;
    }
};