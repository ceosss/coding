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
    int rootToLeafSum = 0;
    void findSum(TreeNode *itr, int current)
    {
        if (itr)
        {
            current = current << 1 | itr->val;
            if (!itr->left && !itr->right)
                rootToLeafSum += current;
            findSum(itr->left, current);
            findSum(itr->right, current);
        }
    }
    int sumRootToLeaf(TreeNode *root)
    {
        findSum(root, 0);
        return rootToLeafSum;
    }
};