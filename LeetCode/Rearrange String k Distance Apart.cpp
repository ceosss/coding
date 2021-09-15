class Solution
{
public:
    /**
     * @param s: a string
     * @param k: an integer
     * @return: a string such that the same characters are at least distance k from each other
     */
    string rearrangeString(string &s, int k)
    {
        if (s.length() < 2 || k < 2)
        {
            return s;
        }
        vector<int> cache(26, 0);
        for (auto i : s)
        {
            cache[i - 'a']++;
        }
        priority_queue<pair<int, char> > pq;
        for (int i = 0; i < 26; i++)
        {
            if (cache[i] > 0)
            {
                pq.push({cache[i], i + 'a'});
            }
        }
        string res = "";
        while (pq.size() >= k)
        {
            vector<pair<int, char> > v;
            int x = k;
            while (x--)
            {
                v.push_back(pq.top());
                pq.pop();
            }
            for (auto i : v)
            {
                res += i.second;
                i.first--;
                if (i.first > 0)
                {
                    pq.push({i.first, i.second});
                }
            }
        }
        if (!pq.empty())
        {
            pair<int, char> cur = pq.top();
            pq.pop();
            if (cur.first > 1)
            {
                return "";
            }
            else
            {
                res += cur.second;
            }
        }
        return res;
    }
};