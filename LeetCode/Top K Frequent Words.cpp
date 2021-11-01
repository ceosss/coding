class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        // SC - o(n)
        // TC - o(n)
        int n = words.size();
        map<string, int> m;
        for (auto i : words)
        {
            m[i]++;
        }
        auto const comp = [](auto const &lhs, auto const &rhs)
        {
            if (lhs.first < rhs.first)
            {
                return true;
            }
            else if (rhs.first < lhs.first)
            {
                return false;
            }
            else
            {
                return lhs.second > rhs.second;
            }
        };
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(comp)> pq(comp);
        vector<string> res;
        for (auto i : m)
        {
            pq.push({i.second, i.first});
        }
        while (k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};