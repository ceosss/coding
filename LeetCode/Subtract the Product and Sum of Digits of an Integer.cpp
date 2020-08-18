class Solution
{
public:
    int subtractProductAndSum(int n)
    {

        int sum = 0, product = 1;

        while (n)
        {
            int last = n % 10;
            sum += last;
            product *= last;
            n /= 10;
        }

        return product - sum;
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