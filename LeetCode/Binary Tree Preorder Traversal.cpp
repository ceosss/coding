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
    vector<int> pre(TreeNode *itr, vector<int> &res)
    {
        if (itr)
        {
            res.push_back(itr->val);
            pre(itr->left, res);
            pre(itr->right, res);
        }
        return res;
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        pre(root, res);
        return res;
    }
};