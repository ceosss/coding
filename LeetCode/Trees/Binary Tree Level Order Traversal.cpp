class Solution
{
public:
    vector<vector<int> > levelOrder(TreeNode *root)
    {
        vector<vector<int> > res;
        if (!root)
        {
            return res;
        }
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
                {
                    q.push(root->left);
                }
                if (root->right)
                {
                    q.push(root->right);
                }
            }
            res.push_back(cur);
        }
        return res;
    }
};