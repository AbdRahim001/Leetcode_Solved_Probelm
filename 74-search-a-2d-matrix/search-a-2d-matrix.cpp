class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int a = 0, b = m * n - 1;
        while (a <= b) {
            int mid = (a + b) / 2;
            int midRow = mid / n;
            int midCol = mid % n;
            if (matrix[midRow][midCol] == target) {
                return true;
            } else if (matrix[midRow][midCol] > target) {
                b = mid - 1;
            } else {
                a = mid + 1;
            }
        }
        return false;
    }
};