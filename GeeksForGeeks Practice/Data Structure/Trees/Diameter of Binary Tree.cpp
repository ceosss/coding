int d;
int findDiameter(struct Node *root)
{
    if (!root)
        return 0;
    int x = findDiameter(root->left);
    int y = findDiameter(root->right);
    d = max(d, x + y + 1);
    return max(x, y) + 1;
}

int diameter(struct Node *root)
{
    d = -1000;
    findDiameter(root);
    return d;
}