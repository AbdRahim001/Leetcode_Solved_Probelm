class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        set<int> numFinal;
        for (auto i : nums1) {
            auto it1 = find(nums1.begin(), nums1.end(), i);
            auto it2 = find(nums2.begin(), nums2.end(), i);
            auto it3 = find(nums3.begin(), nums3.end(), i);
            bool a = it1 != nums1.end(), b = it2 != nums2.end(),
                 c = it3 != nums3.end();
            if (a && b || a && c || b && c) {
                numFinal.insert(i);
            }
        }
        for (auto i : nums2) {
            auto it1 = find(nums1.begin(), nums1.end(), i);
            auto it2 = find(nums2.begin(), nums2.end(), i);
            auto it3 = find(nums3.begin(), nums3.end(), i);
            bool a = it1 != nums1.end(), b = it2 != nums2.end(),
                 c = it3 != nums3.end();
            if (a && b || a && c || b && c) {
                numFinal.insert(i);
            }
        }
        for (auto i : nums3) {
            auto it1 = find(nums1.begin(), nums1.end(), i);
            auto it2 = find(nums2.begin(), nums2.end(), i);
            auto it3 = find(nums3.begin(), nums3.end(), i);
            bool a = it1 != nums1.end(), b = it2 != nums2.end(),
                 c = it3 != nums3.end();
            if (a && b || a && c || b && c) {
                numFinal.insert(i);
            }
        }
        vector<int> result;
        for (auto i : numFinal) {
            result.push_back(i);
        }
        return result;
    }
};