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
    int getMinimumDifference(TreeNode *root)
    {
        int res = INT_MAX;
        TreeNode *prev = NULL;
        find(root, prev, res);
        return res;
    }
    // void inorder(TreeNode *root, vector<int> &res)
    // {
    //     if (!root)
    //         return;
    //     inorder(root->left, res);
    //     res.push_back(root->val);
    //     inorder(root->right, res);
    // }
    // int getMinimumDifference(TreeNode *root)
    // {
    //     vector<int> in;
    //     inorder(root, in);
    //     int m = INT_MAX;
    //     for (int i = 1; i < in.size(); i++)
    //         m = min(m, abs(in[i] - in[i - 1]));
    //     return m;
    // }
};