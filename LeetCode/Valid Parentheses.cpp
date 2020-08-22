class Solution
{
public:
    bool checkParen(string s)
    {
        int n = s.length();
        int f = 0;
        stack<char> a;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                a.push(s[i]);
            }
            else
            {
                if (a.empty())
                {
                    return 0;
                }
                switch (s[i])
                {
                case '}':
                    if (a.top() != '{')
                        return 0;
                    else
                        break;
                case ')':
                    if (a.top() != '(')
                        return 0;
                    else
                        break;
                case ']':
                    if (a.top() != '[')
                        return 0;
                    else
                        break;
                }
                a.pop();
            }
        }

        return a.empty();
    }
    bool isValid(string s)
    {
        int f = checkParen(s);
        if (f)
        {
            return true;
        }
        else
        {
            return false;
        }
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
