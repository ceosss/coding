class Solution
{
public:
    string reformat(string s)
    {
        int n = s.length();
        vector<char> chars;
        vector<int> ints;
        for (auto i : s)
        {
            if (isdigit(i))
            {
                ints.push_back(i);
            }
            else
            {
                chars.push_back(i);
            }
        }
        if (ints.size() == chars.size() || abs(ints.size() - chars.size()) == 1)
        {
            string res = "";
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    res += s
                }
            }
        }
        else
        {
            return "";
        }
    }
};