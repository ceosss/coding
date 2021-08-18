class Solution
{
public:
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> res;
        if (!root)
            return res;
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
            long sum = 0;
            for (auto i : cur)
                sum += i;
            double avg = sum / (double)cur.size();
            res.push_back(avg);
        }
        return res;
    }
};