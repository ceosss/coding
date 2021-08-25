class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &res)
    {
        if (!root)
            return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> in;
        inorder(root, in);
        int m = INT_MAX;
        for (int i = 1; i < in.size(); i++)
            m = min(m, abs(in[i] - in[i - 1]));
        return m;
    }
};