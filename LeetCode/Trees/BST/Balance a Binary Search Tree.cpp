class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    TreeNode *build(vector<int> v, int start, int end)
    {
        if (start > end)
            return NULL;
        int mid = (start + end) / 2;
        TreeNode *node = new TreeNode(v[mid]);
        node->left = build(v, start, mid - 1);
        node->right = build(v, mid + 1, end);
        return node;
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> in;
        inorder(root, in);
        sort(in.begin(), in.end());
        return build(in, 0, in.size() - 1);
    }
};