class Solution
{
public:
    void check(TreeNode *root, TreeNode *&prev, bool &res)
    {
        if (!root)
            return;
        check(root->left, prev, res);
        if (prev && prev->val >= root->val)
        {
            res = false;
            return;
        }
        prev = root;
        check(root->right, prev, res);
    }
    bool isValidBST(TreeNode *root)
    {
        bool res = true;
        TreeNode *prev = NULL;
        check(root, prev, res);
        return res;
    }
    // bool check(TreeNode *root, TreeNode *min, TreeNode *max)
    // {
    //     if (!root)
    //         return true;
    //     if (min && root->val <= min->val)
    //         return false;
    //     if (max && root->val >= max->val)
    //         return false;
    //     return check(root->left, min, root) && check(root->right, root, max);
    // }
    // bool isValidBST(TreeNode *root)
    // {
    //     return check(root, NULL, NULL);
    // }
};