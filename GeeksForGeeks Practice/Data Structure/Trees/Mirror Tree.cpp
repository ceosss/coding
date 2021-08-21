void swap(struct Node *node)
{
    struct Node *temp = node->left;
    node->left = node->right;
    node->right = temp;
}
void mirror(struct Node *node)
{
    if (!node)
        return;
    mirror(node->left);
    mirror(node->right);
    swap(node);
}