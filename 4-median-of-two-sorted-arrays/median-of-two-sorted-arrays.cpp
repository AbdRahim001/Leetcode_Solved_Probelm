class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        if (nums1.size() % 2 == 0) {
            cout << fixed << setprecision(5);
            int mid = nums1.size() / 2;
            return (nums1[mid - 1] + nums1[mid]) / 2.0;
        } else {
            int mid = nums1.size() / 2;
            return nums1[mid];
        }
    }
};