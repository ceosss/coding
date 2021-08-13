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
    bool dfs(TreeNode *itr, int sum, int targetSum)
    {
        if (!itr)
            return false;
        sum += itr->val;
        if (!itr->left && !itr->right)
            return sum == targetSum;
        return dfs(itr->left, sum, targetSum) || dfs(itr->right, sum, targetSum);
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return dfs(root, 0, targetSum);
    }
};