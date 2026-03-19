class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<bool> pos(1001, false), neg(1001, false);
        for (auto i : nums) {
            if (i > 0)
                pos[i] = true;
            else
                neg[abs(i)] = true;
        }
        int mx = -1;
        for (int i = 0; i <= 1001; i++) {
            if (pos[i] && neg[i]) {
                mx = max(mx, i);
            }
        }
        return mx;
    }
};