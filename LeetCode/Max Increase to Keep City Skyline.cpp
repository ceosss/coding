class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<int> row(n, 0);
        vector<int> col(n, 0);
        int tempR = 0;
        int tempC = 0;

        for (size_t i = 0; i < grid.size(); i++)
        {
            for (size_t j = 0; j < grid[i].size(); j++)
            {
                if (row[i] < grid[i][j])
                    row[i] = grid[i][j];
                if (col[j] < grid[i][j])
                    col[j] = grid[i][j];
            }
        }

        int ret = 0;
        for (size_t i = 0; i < grid.size(); i++)
        {
            for (size_t j = 0; j < grid[i].size(); j++)
            {
                int temp = grid[i][j];
                grid[i][j] = row[i] > col[j] ? col[j] : row[i];
                ret += (grid[i][j] - temp);
            }
        }

        return ret;
    }
};

//
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
//
