class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<bool> rowPos(201, false);
        vector<bool> colPos(201, false);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    rowPos[i] = true;
                    colPos[j] = true;
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0 && rowPos[i] && colPos[j]) {
                    for (int k = i; k >= 0; k--) {
                        matrix[k][j] = 0;
                    }
                    for (int k = i; k < row; k++) {
                        matrix[k][j] = 0;
                    }
                    for (int k = j; k < col; k++) {
                        matrix[i][k] = 0;
                    }
                    for (int k = j; k >= 0; k--) {
                        matrix[i][k] = 0;
                    }
                }
            }
        }
    }
};