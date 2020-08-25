class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> a;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (a.empty())
            {
                a.push(s[i]);
            }
            else
            {
                char top = a.top();
                if (s[i] == top)
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
            char top = a.top();
            res += top;
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