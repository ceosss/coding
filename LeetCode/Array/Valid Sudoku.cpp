class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        // TC - o(9*9)
        // SC - o(9*9)
        unordered_map<string, bool> m;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    string row = "row" + to_string(i) + board[i][j];
                    if (m[row])
                    {
                        return false;
                    }
                    else
                    {
                        m[row] = true;
                    }

                    string col = "col" + to_string(j) + board[i][j];
                    if (m[col])
                    {
                        return false;
                    }
                    else
                    {
                        m[col] = true;
                    }
                    // IMP
                    string box = "box" + to_string((i / 3) * 3 + j / 3) + board[i][j];
                    if (m[box])
                    {
                        return false;
                    }
                    else
                    {
                        m[box] = true;
                    }
                }
            }
        }
        return true;
    }
};