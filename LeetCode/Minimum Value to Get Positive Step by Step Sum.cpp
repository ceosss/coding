class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        int n = nums.size();
        int curSum = 0, minSum = 0;
        for (int i = 0; i < n; i++)
        {
            curSum += nums[i];
            if (curSum < minSum)
                minSum = curSum;
        }
        return -minSum + 1;
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
