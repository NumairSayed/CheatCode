class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        cout << "rows: " << n << " "
             << "columns: " << m << endl;

        bool zeroeth_colstatus = false;
        bool zeroeth_rowstatus = false;

        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                zeroeth_colstatus = true;
                break;
            }
        }

        for (int i = 0; i < m; i++) {
            if (matrix[0][i] == 0) {
                zeroeth_rowstatus = true;
                break;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 1; j < m; j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (zeroeth_rowstatus) {
            for (int i = 0; i < m; i++) {
                matrix[0][i] = 0;
            }
        }

        if (zeroeth_colstatus) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};