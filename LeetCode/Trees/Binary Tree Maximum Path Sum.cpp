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
    int find(TreeNode *root, int &res)
    {
        if (!root)
        {
            return 0;
        }
        int left = max(0, find(root->left, res));
        int right = max(0, find(root->right, res));
        int cur = root->val;
        res = max(res, cur + left + right);
        return max(cur + left, cur + right);
    }
    int maxPathSum(TreeNode *root)
    {
        int res = INT_MIN;
        find(root, res);
        return res;
    }
};