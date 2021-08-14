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
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> stack;
        TreeNode *itr = root;
        vector<int> result;
        while (itr || !stack.empty())
        {
            while (itr)
            {
                stack.push(itr);
                itr = itr->left;
            }
            itr = stack.top();
            stack.pop();
            result.push_back(itr->val);
            itr = itr->right;
        }
        return result;
    }
    // vector<int> inorder(TreeNode *itr, vector<int> &res)
    // {
    //     if (itr)
    //     {
    //         inorder(itr->left, res);
    //         res.push_back(itr->val);
    //         inorder(itr->right, res);
    //     }
    //     return res;
    // }
    // vector<int> inorderTraversal(TreeNode *root)
    // {
    //     vector<int> res;
    //     inorder(root, res);
    //     return res;
    // }
};