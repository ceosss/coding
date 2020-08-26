class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n = s.length();
        int m = t.length();
        stack<char> a;
        stack<char> b;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#' && a.empty())
                continue;
            if (s[i] == '#')
            {
                a.pop();
            }
            else
            {
                a.push(s[i]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] == '#' && b.empty())
                continue;
            if (t[i] == '#')
            {
                b.pop();
            }
            else
            {
                b.push(t[i]);
            }
        }
        string s1 = "";
        string s2 = "";
        while (!a.empty())
        {
            char t = a.top();
            s1 += t;
            a.pop();
        }
        while (!b.empty())
        {
            char t = b.top();
            s2 += t;
            b.pop();
        }
        return s1 == s2;
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
