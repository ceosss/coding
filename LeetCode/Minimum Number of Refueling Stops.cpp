class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int> > &stations)
    {
        int fuel = startFuel;
        int pos = 0;
        int index = 0;
        int count = 0;
        priority_queue<int> pq;
        while (pos < target)
        {
            pos += fuel;
            fuel = 0;
            while (index < stations.size() && pos >= stations[index][0])
            {
                pq.push(stations[index][1]);
                index++;
            }
            if (pos >= target)
            {
                return count;
            }
            if (pq.empty())
            {
                return -1;
            }
            fuel += pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};