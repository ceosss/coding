class Solution
{
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root)
    {
        vector<vector<int> > v;
        if (!root)
            return v;
        deque<vector<int> > res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> cur;
            while (size--)
            {
                root = q.front();
                q.pop();
                cur.push_back(root->val);
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            res.push_front(cur);
        }

        for (auto i : res)
            v.push_back(i);
        return v;
    }
};