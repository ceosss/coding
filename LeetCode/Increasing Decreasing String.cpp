class Solution
{
public:
    string sortString(string s)
    {
        int count[26]{0};
        for (auto ch : s)
        {
            count[ch - 'a'] += 1;
        }
        string ans = "";
        int size = s.size();
        while (true)
        {
            for (int i = 0; i < 26; i++)
            {
                if (count[i] >= 1)
                {
                    ans += (char)(i + 'a');
                    count[i]--;
                    size--;
                }
            }
            for (int i = 26 - 1; i >= 0; i--)
            {
                if (count[i] >= 1)
                {
                    ans += (char)(i + 'a');
                    count[i]--;
                    size--;
                }
            }
            if (size <= 0)
                break;
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
