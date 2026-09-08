class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> freq1(2002, false);
        vector<bool> freq2(2002, false);
        for (auto i : nums1)
            freq1[i + 1000] = true;
        for (auto i : nums2)
            freq2[i + 1000] = true;
        set<int> ans1;
        set<int> ans2;
        for (auto i : nums1)
            if (freq2[i + 1000] == false)
                ans1.insert(i);
        for (auto i : nums2)
            if (freq1[i + 1000] == false)
                ans2.insert(i);
        vector<int> result1;
        vector<int> result2;
        for (auto i : ans1)
            result1.push_back(i);
        for (auto i : ans2)
            result2.push_back(i);
        return {result1, result2};
    }
};