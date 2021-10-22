class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        // TC - o(n)
        // sC - o(n)
        int n = nums.size();
        map<int, int> m;
        for (auto i : nums)
        {
            m[i]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto i : m)
        {
            pq.push({i.second, i.first});
        }
        vector<int> res;
        while (k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};