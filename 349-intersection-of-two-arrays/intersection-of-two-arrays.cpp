class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        set<int> st2;
        vector<int> ans;
        for (auto i : nums1)
            st1.insert(i);
        for (auto i : nums2)
            st2.insert(i);
        for (auto i : st1) {

            if (st2.find(i) != st2.end()) {
                ans.push_back(i);
                st2.erase(i);
            }
        }
        return ans;
    }
};