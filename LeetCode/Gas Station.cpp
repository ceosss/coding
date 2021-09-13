class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += gas[i] - cost[i];
        }
        if (total < 0)
        {
            return -1;
        }
        int start = 0;
        int bal = 0;
        for (int i = 0; i < n; i++)
        {
            bal += gas[i] - cost[i];
            if (bal < 0)
            {
                bal = 0;
                start = i + 1;
            }
        }
        return start;
    }
};