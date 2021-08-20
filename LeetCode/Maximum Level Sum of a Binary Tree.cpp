class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        vector<int> sums;
        if (!root)
            return 0;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            int sum = 0;
            while (size--)
            {
                root = q.front();
                q.pop();
                sum += root->val;
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            sums.push_back(sum);
        }
        int maxx = INT_MIN;
        int maxx_index = 0;
        for (int i = 0; i < sums.size(); i++)
        {
            if (sums[i] > maxx)
            {
                maxx = sums[i];
                maxx_index = i;
            }
        }
        return ++maxx_index;
    }
};