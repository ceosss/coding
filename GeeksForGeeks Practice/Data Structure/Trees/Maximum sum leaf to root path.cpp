class Solution
{
public:
    int m = INT_MIN;
    void findMax(Node *root, int sum)
    {
        if (!root)
            return;
        sum += root->data;
        if (!root->left && !root->right)
            m = max(m, sum);
        findMax(root->left, sum);
        findMax(root->right, sum);
    }
    int maxPathSum(Node *root)
    {
        findMax(root, 0);
        return m;
    }
};