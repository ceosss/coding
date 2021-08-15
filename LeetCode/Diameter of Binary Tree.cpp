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
    int diameter = INT_MIN;
    int findDiameter(TreeNode *root)
    {
        if (!root)
            return 0;
        int x = findDiameter(root->left);
        int y = findDiameter(root->right);
        diameter = max(diameter, x + y + 1);
        return max(x, y) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        findDiameter(root);
        return --diameter;
    }
};