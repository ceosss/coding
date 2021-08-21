class Solution
{
public:
    unordered_map<Node *, int> m;
    int getMaxSum(Node *root)
    {
        if (!root)
            return 0;
        if (m[root])
            return m[root];
        int inc = root->data;
        if (root->left)
        {
            inc += getMaxSum(root->left->left);
            inc += getMaxSum(root->left->right);
        }
        if (root->right)
        {
            inc += getMaxSum(root->right->left);
            inc += getMaxSum(root->right->right);
        }
        int exc = 0;
        exc += getMaxSum(root->left);
        exc += getMaxSum(root->right);
        m[root] = max(inc, exc);
        return m[root];
    }
};