class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> b;
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                b.push_back(nums[i + 1]);
            }
        }
        return b;
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