class Solution
{
public:
    void helper(TreeNode *root, int val, bool &b)
    {
        if (!root || !b)
            return;
        if (root->val != val)
            b = false;
        helper(root->left, val, b);
        helper(root->right, val, b);
    }
    bool isUnivalTree(TreeNode *root)
    {
        bool res = true;
        helper(root, root->val, res);
        return res;
    }
};