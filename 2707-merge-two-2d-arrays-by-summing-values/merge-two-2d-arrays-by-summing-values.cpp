class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int left = 0, right = 0;
        vector<vector<int>> result;
        while (left < len1 && right < len2) {
            if (nums1[left][0] == nums2[right][0]) {
                vector<int> temp = {nums1[left][0],
                                    nums1[left][1] + nums2[right][1]};
                result.push_back(temp);
                left++;
                right++;
            } else if (nums1[left][0] < nums2[right][0]) {
                vector<int> temp = {nums1[left][0], nums1[left][1]};
                result.push_back(temp);
                left++;
            } else {
                vector<int> temp = {nums2[right][0], nums2[right][1]};
                result.push_back(temp);
                right++;
            }
        }
        while (left < len1) {
            result.push_back({nums1[left][0], nums1[left][1]});
            left++;
        }
        while (right < len2) {
            result.push_back({nums2[right][0], nums2[right][1]});
            right++;
        }

        return result;
    }
};