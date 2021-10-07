/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> res;
        if (!root)
        {
            return res;
        }
        map<int, map<int, multiset<int>>> m;
        queue<pair<TreeNode *, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while (!q.empty())
        {
            root = q.front().first;
            int dis = q.front().second.first;
            int lev = q.front().second.second;
            q.pop();
            m[dis][lev].insert(root->val);
            if (root->left)
            {
                q.push({root->left, {dis - 1, lev + 1}});
            }
            if (root->right)
            {
                q.push({root->right, {dis + 1, lev + 1}});
            }
        }
        for (auto i : m)
        {
            vector<int> cur;
            for (auto j : i.second)
            {
                for (auto k : j.second)
                {
                    cur.push_back(k);
                }
            }
            res.push_back(cur);
        }
        return res;
    }
};