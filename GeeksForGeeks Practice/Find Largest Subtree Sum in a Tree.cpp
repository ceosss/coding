int m;

int maxS(TreeNode<int> *root)
{
    if (!root)
        return 0;
    int left = maxS(root->left);
    int right = maxS(root->right);
    int data = root->data;
    m = max(m, data + left + right);
    return data + left + right;
}

int largestSubtreeSum(TreeNode<int> *root)
{
    m = -100000;
    maxS(root);
    return m;
}