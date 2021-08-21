class Solution
{
public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> res;
        map<int, int> m;
        queue<pair<Node *, int> > q;
        if (!root)
            return res;
        q.push({root, 0});
        while (!q.empty())
        {
            Node *node = q.front().first;
            int dis = q.front().second;
            q.pop();
            if (m.find(dis) == m.end())
                m[dis] = node->data;
            if (node->left)
                q.push({node->left, dis - 1});
            if (node->right)
                q.push({node->right, dis + 1});
        }
        for (auto i : m)
            res.push_back(i.second);
        return res;
    }
};
