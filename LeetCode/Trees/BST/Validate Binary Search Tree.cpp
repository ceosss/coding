class Solution
{
public:
    bool check(TreeNode *root, TreeNode *min, TreeNode *max)
    {
        if (!root)
            return true;
        if (min && root->val <= min->val)
            return false;
        if (max && root->val >= max->val)
            return false;
        return check(root->left, min, root) && check(root->right, root, max);
    }
    bool isValidBST(TreeNode *root)
    {
        return check(root, NULL, NULL);
    }
};