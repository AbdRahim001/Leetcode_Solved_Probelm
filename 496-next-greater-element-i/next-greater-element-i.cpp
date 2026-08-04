class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int len = nums2.size();
        for (auto i : nums1) {
            int temp = -1;
            bool flag = false;
            for (int j = 0; j < len; j++) {
                if (i == nums2[j]) {
                    for (int k = j + 1; k < len; k++) {
                        if (i < nums2[k]) {
                            temp = nums2[k];
                            flag = true;
                            break;
                        }
                    }
                }
                if (flag) {
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};