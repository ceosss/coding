class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int n = s.length();
        int count = 0;
        stack<char> a;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                a.push(s[i]);
            }
            else
            {
                if (a.empty())
                    count++;
                else
                {
                    if (a.top() == '(')
                    {
                        a.pop();
                    }
                    else
                    {
                        count++;
                    }
                }
            }
        }
        return count + a.size();
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