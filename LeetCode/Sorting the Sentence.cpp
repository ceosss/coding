class Solution
{
public:
    string sortSentence(string s)
    {
        string add;
        string result = "";
        vector<string> build(10, "");
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] > '0' && s[i] <= '9')
            {
                build[s[i] - '0' - 1] = add;
                add = "";
            }
            else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                add += s[i];
            }
        }
        for (int i = 0; i < build.size(); i++)
        {
            if (build[i] != "")
            {
                result += build[i];
                result += " ";
            }
        }
        result.pop_back();
        return result;
    }
};