int Solution::isSameTree(TreeNode *a, TreeNode *b)
{
    if (!a && !b)
        return 1;
    if (!a || !b)
        return 0;
    if (a->val != b->val)
        return 0;
    return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
}