class Solution
{
public:
    int m = INT_MIN;
    void find(Node *root, int sum)
    {
        if (!root)
            return;
        sum += root->data;
        if (!root->left && !root->right)
            m = max(m, sum);
        find(root->left, sum);
        find(root->right, sum);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        find(root, 0);
        return m;
    }
};