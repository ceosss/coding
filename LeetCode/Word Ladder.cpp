class Solution
{
public:
    int ladderLength(string start, string end, vector<string> &wordList)
    {
        unordered_set<string> set;
        int count = 0;
        bool endFound = false;
        for (auto i : wordList)
        {
            set.insert(i);
            if (i == end)
            {
                endFound = true;
            }
        }
        if (!endFound)
        {
            return 0;
        }
        queue<string> q;
        q.push(start);
        while (!q.empty())
        {
            int size = q.size();
            count++;
            while (size--)
            {
                string s = q.front();
                q.pop();
                for (int i = 0; i < s.length(); i++)
                {
                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        string sToFind = s;
                        sToFind[i] = ch;
                        if (sToFind == s)
                        {
                            continue;
                        }
                        if (set.find(sToFind) != set.end())
                        {
                            if (sToFind == end)
                            {
                                return count + 1;
                            }
                            set.erase(sToFind);
                            q.push(sToFind);
                        }
                    }
                }
            }
        }
        return 0;
    }
};