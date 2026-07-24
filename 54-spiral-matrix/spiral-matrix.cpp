class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<int> ans;
        int top = 0, left = 0;
        int bottom = row - 1, right = col - 1;
        while (top <= bottom && left <= right) {
            for (auto i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (auto i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (auto i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (auto i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};