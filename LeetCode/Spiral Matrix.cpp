class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int top = 0;
        int left = 0;
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        vector<int> res;
        int n = matrix.size() * matrix[0].size();
        while (res.size() != n)
        {
            for (int i = left; i <= right && res.size() != n; i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom && res.size() != n; i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;
            for (int i = right; i >= left && res.size() != n; i--)
            {
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i = bottom; i >= top && res.size() != n; i--)
            {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        return res;
    }
};