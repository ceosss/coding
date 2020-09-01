class Solution
{
public:
    string generateTheString(int n)
    {
        string generated = "";
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                generated += 'a';
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                generated += 'a';
            }
            generated += 'b';
        }
        return generated;
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