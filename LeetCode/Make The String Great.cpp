class Solution
{
public:
    string makeGood(string s)
    {
        int n = s.length();
        stack<char> a;
        for (int i = 0; i < n; i++)
        {
            if (a.empty())
            {
                a.push(s[i]);
            }
            else
            {
                char prev = a.top();
                if (tolower(prev) == tolower(s[i]) && ((islower(prev) && isupper(s[i])) || (isupper(prev) && islower(s[i]))))
                {
                    a.pop();
                }
                else
                {
                    a.push(s[i]);
                }
            }
        }
        string res = "";
        while (!a.empty())
        {
            char t = a.top();
            res += t;
            a.pop();
        }
        reverse(res.begin(), res.end());
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
