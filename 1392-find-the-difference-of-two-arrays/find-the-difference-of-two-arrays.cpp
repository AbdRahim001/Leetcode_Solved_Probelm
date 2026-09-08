class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> n1Map;
        map<int, int> n2Map;
        for (auto i : nums1) {
            n1Map[i]++;
        }
        for (auto i : nums2) {
            n2Map[i]++;
        }
        set<int> ans1;
        set<int> ans2;
        for (auto i : nums1) {
            auto it = n2Map.find(i);
            if (it == n2Map.end())
                ans1.insert(i);
        }
        for (auto i : nums2) {
            auto it = n1Map.find(i);
            if (it == n1Map.end())
                ans2.insert(i);
        }
        vector<int> result1;
        vector<int> result2;
        for (auto i : ans1)
            result1.push_back(i);
        for (auto i : ans2)
            result2.push_back(i);
        return {result1, result2};
    }
};