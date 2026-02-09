class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        auto it1 = unique(nums1.begin(), nums1.end());
        nums1.erase(it1, nums1.end());
        auto it2 = unique(nums2.begin(), nums2.end());
        nums2.erase(it2, nums2.end());

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    nums3.push_back(nums1[i]);
                }
            }
        }
        return nums3;
    }
};