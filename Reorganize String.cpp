class Solution
{
public:
    string reorganizeString(string s)
    {
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

        if (pq.top().first > (s.length() + 1) / 2)
        {
            return "";
        }

        string res = "";

        while (pq.size() > 1)
        {
            pair<int, char> p1 = pq.top();
            pq.pop();
            pair<int, char> p2 = pq.top();
            pq.pop();

            res += p1.second;
            res += p2.second;

            p1.first--;
            p2.first--;

            if (p1.first > 0)
            {
                pq.push({p1.first, p1.second});
            }
            if (p2.first > 0)
            {
                pq.push({p2.first, p2.second});
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