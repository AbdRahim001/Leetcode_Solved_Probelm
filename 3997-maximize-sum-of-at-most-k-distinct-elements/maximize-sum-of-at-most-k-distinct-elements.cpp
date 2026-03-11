class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int, greater<int>> st;
        vector<int> result;
        for (auto i : nums) {
            st.insert(i);
        }
        auto it = st.begin();
        for (int i = 0; i < min(k,(int)st.size()); i++) {
            result.push_back(*it);
            it++;
        }
        return result;
    }
};