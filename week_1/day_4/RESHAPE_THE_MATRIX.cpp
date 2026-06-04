class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> reshap(r, vector<int>(c));
        if ((r * c) != (m * n))
            return mat;
        int a = 0, b = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                reshap[a][b] = mat[i][j];
                b = (b + 1) % c;
                if (b == 0)
                    a = a + 1;
            }
        }
        return reshap;
    }
};