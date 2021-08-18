class Solution
{
public:
    vector<string> result;
    void path(TreeNode *root, string res)
    {
        if (!root)
            return;
        if (res.length() > 0)
            res += "->";
        res += to_string(root->val);
        if (!root->left && !root->right)
            result.push_back(res);
        path(root->left, res);
        path(root->right, res);
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        path(root, "");
        return result;
    }
};