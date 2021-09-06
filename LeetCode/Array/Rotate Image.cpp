class Solution
{
public:
    void rotate(vector<vector<int> > &matrix)
    {
        // TC - o(n^2)
        // SC - o(1)
        // transpose the matrix
        // reverse each row
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i; j < matrix[i].size(); j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};