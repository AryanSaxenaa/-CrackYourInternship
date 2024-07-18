class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<vector<int>> dummy = matrix;

        for (int row=0;row<rows;row++) {
            for (int column=0;column<columns;column++) {
                if (matrix[row][column] == 0) {
                    for (int i = 0; i < columns; i++) {
                        dummy[row][i] = 0;
                    }
                    for (int i = 0; i < rows; i++) {
                        dummy[i][column] = 0;
                    }
                }
            }
        }

        for (int row = 0; row < rows; row++) {
            for (int column = 0; column < columns; column++) {
                if (dummy[row][column] == 0) {
                    matrix[row][column] = 0;
                }
            }
        }
    }
};
