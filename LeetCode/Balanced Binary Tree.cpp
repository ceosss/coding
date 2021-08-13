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
    bool result = true;
    int heightAndBalanced(TreeNode *itr)
    {
        if (!itr)
            return 0;
        int lst = heightAndBalanced(itr->left);
        int rst = heightAndBalanced(itr->right);
        if (abs(lst - rst) > 1)
            result = false;
        return max(lst, rst) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        heightAndBalanced(root);
        return result;
    }
    // int height(TreeNode *root)
    // {
    //     if (!root)
    //         return 0;
    //     else
    //     {
    //         int x = height(root->left);
    //         int y = height(root->right);
    //         return max(x, y) + 1;
    //     }
    // }
    // bool isBalanced(TreeNode *root)
    // {
    //     if (!root)
    //         return true;
    //     int lh = height(root->left);
    //     int rh = height(root->right);
    //     if (abs(lh - rh) > 1)
    //         return false;
    //     else
    //         return isBalanced(root->left) && isBalanced(root->right);
    // }
};