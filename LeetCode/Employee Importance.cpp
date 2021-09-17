/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution
{
public:
    int getImportance(vector<Employee *> employees, int id)
    {
        map<int, Employee *> m;
        for (auto i : employees)
        {
            m[i->id] = i;
        }
        int res = 0;
        queue<int> q;
        q.push(id);
        while (!q.empty())
        {
            Employee *emp = m[q.front()];
            q.pop();
            res += emp->importance;
            for (auto i : emp->subordinates)
            {
                q.push(i);
            }
        }
        return res;
    }
};