class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
            int k = m + i;
            while (k > 0 && nums1[k] < nums1[k - 1]) {
                swap(nums1[k], nums1[k - 1]);
                k--;
            }
        }
    }
};