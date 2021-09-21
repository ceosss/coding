/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution
{
public:
    int minMeetingRooms(vector<Interval> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](const auto &lhs, const auto &rhs)
             { return lhs.start < rhs.start; });
        priority_queue<int, vector<int>, greater<int> >
            pq;
        int rooms = 0;
        for (int i = 0; i < n; i++)
        {
            if (!pq.empty() && pq.top() <= intervals[i].start)
            {
                int end = pq.top();
                pq.pop();
                pq.push(intervals[i].end);
            }
            else
            {
                pq.push(intervals[i].end);
                rooms++;
            }
        }
        return rooms;
    }
};