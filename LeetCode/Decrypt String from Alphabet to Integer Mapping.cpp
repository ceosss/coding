class Solution
{
public:
    string freqAlphabets(string s)
    {
        int n = s.length();
        int i = 0;
        string res = "";
        while (i < n)
        {
            if (i + 2 < n && s[i + 2] == '#')
            {
                int num = (s[i] - '0') * 10 + s[i + 1] - '0';
                res += num + 'a' - 1;
                i += 3;
            }
            else
            {
                res += (s[i] - '0') + 'a' - 1;
                i++;
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
