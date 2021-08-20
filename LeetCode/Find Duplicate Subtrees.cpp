class Solution
{
public:
    unordered_map<string, int> m;
    vector<TreeNode *> res;
    string findD(TreeNode *root)
    {
        if (!root)
            return "$";
        string left = findD(root->left);
        string right = findD(root->right);
        string cur = to_string(root->val);
        string x = cur + "$" + left + "$" + right; // IMPORTANT
        if (m[x] == 1)
            res.push_back(root);
        m[x]++;
        return x;
    }
    vector<TreeNode *> findDuplicateSubtrees(TreeNode *root)
    {
        findD(root);
        return res;
    }
};