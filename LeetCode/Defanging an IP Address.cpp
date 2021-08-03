class Solution
{
public:
    string defangIPaddr(string address)
    {
        int n = address.length();
        string result = "";
        for (int i = 0; i < n; i++)
        {
            if (address[i] == '.')
            {
                result += "[.]";
            }
            else
            {
                result += address[i];
            }
        }
        return result;
    }
};