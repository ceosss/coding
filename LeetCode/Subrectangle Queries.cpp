class SubrectangleQueries
{
    vector<vector<int>> A;

public:
    SubrectangleQueries(vector<vector<int>> &rectangle) : A(rectangle) {}
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; ++i)
        {
            for (int j = col1; j <= col2; ++j)
            {
                A[i][j] = newValue;
            }
        }
    }
    int getValue(int row, int col)
    {
        return A[row][col];
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
