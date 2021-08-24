class Solution
{
public:
    int findMax(Node *root)
    {
        if (!root)
            return INT_MIN;
        int x = findMax(root->left);
        int y = findMax(root->right);
        int z = root->data;
        return max(z, max(x, y));
    }
    int findMin(Node *root)
    {
        if (!root)
            return INT_MAX;
        int x = findMin(root->left);
        int y = findMin(root->right);
        int z = root->data;
        return min(z, min(x, y));
    }
};