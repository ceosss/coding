class Solution
{
public:
    string interpret(string command)
    {
        int n = command.length();
        string result = "";
        int i = 0;

        while (i < n)
        {
            if (command[i] == 'G')
            {
                result += 'G';
                i++;
            }
            else if (i + 1 < n && command[i] == '(' && command[i + 1] == ')')
            {
                result += 'o';
                i += 2;
            }
            else if (i + 3 < n && command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')')
            {
                result += "al";
                i += 4;
            }
        }

        return result;
    }
};