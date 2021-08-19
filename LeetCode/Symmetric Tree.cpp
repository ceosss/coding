class Solution
{
public:
    void check(TreeNode *root1, TreeNode *root2, bool &res)
    {
        if ((!root1 && !root2) || !res)
            return;
        if (!root1 && root2 || !root2 && root1)
        {
            res = false;
            return;
        }
        if (root1->val != root2->val)
        {
            res = false;
            return;
        }
        check(root1->left, root2->right, res);
        check(root1->right, root2->left, res);
    }
    bool isSymmetric(TreeNode *root)
    {
        bool res = true;
        check(root->left, root->right, res);
        return res;
    }
};