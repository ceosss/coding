class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            cnt = 0;
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == 'R')
                    cnt++;
                else
                    cnt--;
                if (j - i > 0 && cnt == 0)
                {
                    ans++;
                    i = j;
                    break;
                }
            }
        }
        return ans;
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