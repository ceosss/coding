class Solution
{
public:
    void find(TreeNode *root, TreeNode *&prev, int &res)
    {
        if (!root)
            return;
        find(root->left, prev, res);
        if (prev)
            res = min(res, abs(root->val - prev->val));
        prev = root;
        find(root->right, prev, res);
    }
    int minDiffInBST(TreeNode *root)
    {
        int res = INT_MAX;
        TreeNode *prev = NULL;
        find(root, prev, res);
        return res;
    }
};