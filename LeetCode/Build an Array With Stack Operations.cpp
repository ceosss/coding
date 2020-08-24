class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        int i = 1, cur = 0;
        vector<string> res;
        while (i <= n && cur < target.size())
        {
            if (i == target[cur])
            {
                res.push_back("Push");
                cur++;
            }
            else
            {
                res.push_back("Push");
                res.push_back("Pop");
            }
            i++;
        }
        return res;
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
