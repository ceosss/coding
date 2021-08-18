class Solution
{
public:
    void preOrder(TreeNode *root, vector<int> &res)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
            res.push_back(root->val);
        preOrder(root->left, res);
        preOrder(root->right, res);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> res1;
        vector<int> res2;
        preOrder(root1, res1);
        preOrder(root2, res2);
        return res1 == res2;
    }
};