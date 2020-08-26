class Solution
{
public:
    int calPoints(vector<string> &s)
    {
        int n = s.size();
        stack<int> a;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == "+")
            {
                int t1 = a.top();
                a.pop();
                int t2 = a.top();
                a.push(t1);
                a.push(t1 + t2);
            }
            else if (s[i] == "D")
            {
                int t = a.top();
                a.push(2 * t);
            }
            else if (s[i] == "C")
            {
                a.pop();
            }
            else
            {
                int t = stoi(s[i]);
                a.push(t);
            }
        }
        int res = 0;
        while (!a.empty())
        {
            int t = a.top();
            res += t;
            a.pop();
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
