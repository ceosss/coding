class Solution
{
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int> > res;
        if (!root)
            return res;
        bool rev = false;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> curLevel;
            while (size--)
            {
                root = q.front();
                q.pop();
                curLevel.push_back(root->val);
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            if (rev)
                reverse(curLevel.begin(), curLevel.end());
            res.push_back(curLevel);
            rev = !rev;
        }
        return res;
    }
};