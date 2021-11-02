class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // TC - o(m*n)
        // SC - o(1)
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][0] == 0)
                col0 = 0;
            for (int j = 1; j < cols; j++)
                if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }

        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 1; j--)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if (col0 == 0)
                matrix[i][0] = 0;
        }
        // TC - o(n^2)
        // SC - o(m + n)
        // int m = matrix.size();
        // int n = matrix[0].size();
        // vector<bool>rows(m,true);
        // vector<bool>cols(n,true);
        // for(int i = 0; i < m; i++){
        //     for(int j = 0; j < n; j++){
        //         if(matrix[i][j] == 0){
        //             rows[i] = 0;
        //             cols[j] = 0;
        //         }
        //     }
        // }
        // for(int i = 0; i < m; i++){
        //     for(int j = 0; j < n; j++){
        //         if(rows[i] == 0 || cols[j] == 0){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    }
};