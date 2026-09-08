class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> freq1(2002, false);
        vector<bool> freq2(2002, false);
        for (auto i : nums1)
            freq1[i + 1000] = true;
        for (auto i : nums2)
            freq2[i + 1000] = true;
        vector<int> ans1;
        vector<int> ans2;
        for (int i = 0; i < 2002; i++) {
            if (freq1[i] != freq2[i]) {
                if (freq1[i])
                    ans1.emplace_back(i - 1000);
                else
                    ans2.emplace_back(i - 1000);
            }
        }
        return {ans1, ans2};
    }
};