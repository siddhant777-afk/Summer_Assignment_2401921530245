class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int k = mat.size() - 1, j = mat[0].size() - 1, i = 0, sum = 0;
        while (k >= 0) {
            if (i == j) {
                sum += mat[i][j];
            } else {
                sum += (mat[i][i] + mat[i][j]);
            }
            i++;
            j--;
            k--;
        }
        return sum;
    }
};