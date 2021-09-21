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
    bool canAttendMeetings(vector<Interval> &intervals)
    {
        int n = intervals.size();
        if (n == 0)
        {
            return true;
        }
        sort(intervals.begin(), intervals.end(), [](const auto &lhs, const auto &rhs)
             { return lhs.start < rhs.start; });
        for (int i = 0; i < n - 1; i++)
        {
            if (intervals[i].end > intervals[i + 1].start)
            {
                return false;
            }
        }
        return true;
    }
};