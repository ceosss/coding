class Solution
{
public:
    void find(TreeNode *root, int &k, int &res)
    {
        if (!root)
            return;
        find(root->left, k, res);
        if (--k == 0)
        {
            res = root->val;
            return;
        }
        find(root->right, k, res);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        int res = -1;
        find(root, k, res);
        return res;
    }
};