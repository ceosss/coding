class Solution
{
public:
    vector<vector<int> > merge(vector<vector<int> > &intervals)
    {
        vector<vector<int> > res;
        if (intervals.size() == 0)
        {
            return res;
        }
        sort(intervals.begin(), intervals.end());
        vector<int> comp;
        comp.push_back(intervals[0][0]);
        comp.push_back(intervals[0][1]);
        for (auto i : intervals)
        {
            if (comp[1] >= i[0])
            {
                comp[0] = min(comp[0], i[0]);
                comp[1] = max(comp[1], i[1]);
            }
            else
            {
                res.push_back(comp);
                comp[0] = i[0];
                comp[1] = i[1];
            }
        }
        res.push_back(comp);
        return res;
    }
};