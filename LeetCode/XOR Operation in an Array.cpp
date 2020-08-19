class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int final = 0;

        for (int i = 0; i < n; i++)
        {

            final = final ^ start + 2 * i;
        }
        return final;
    }
};