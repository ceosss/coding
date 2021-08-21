int height(struct Node *node)
{
    if (!node)
        return 0;
    int x = height(node->left);
    int y = height(node->right);
    return x > y ? x + 1 : y + 1;
}