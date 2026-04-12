class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x=original.size();
        if (x != m * n) {
            return {};
        }
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 0; i < x; i++) {
            ans[i / n][i % n] = original[i];
        }

        return ans;
    }
};