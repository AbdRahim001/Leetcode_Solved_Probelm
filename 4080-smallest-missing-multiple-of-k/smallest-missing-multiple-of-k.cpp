class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> freq(1001, 0);
        for (auto i : nums) {
            freq[i]++;
        }
        int i = 1;
        while (freq[i * k] != 0) {
            i++;
        }
        return i * k;
    }
};