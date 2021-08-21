class Solution
{
public:
    vector<int> bottomView(Node *root)
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
            m[dis] = node->data;
            q.pop();
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