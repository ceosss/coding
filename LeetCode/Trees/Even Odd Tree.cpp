class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        bool odd = false;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> v;
            while (size--)
            {
                root = q.front();
                q.pop();
                v.push_back(root->val);
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            int n = v.size();
            for (int i = 0; i < n; i++)
            {
                if (odd)
                {
                    if (v[i] % 2 != 0)
                        return false;
                    if (i + 1 < n && v[i] <= v[i + 1])
                        return false;
                }
                else
                {
                    if (v[i] % 2 == 0)
                        return false;
                    if (i + 1 < n && v[i] >= v[i + 1])
                        return false;
                }
            }
            odd = !odd;
        }
        return true;
    }
};