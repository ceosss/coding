class Solution
{
public:
    string removeOuterParentheses(string s)
    {

        string res;
        int opened = 0;
        for (char c : s)
        {
            if (c == '(' && opened++ > 0)
            {
                res += c;
            }
            if (c == ')' && opened-- > 1)
            {
                res += c;
            }
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
