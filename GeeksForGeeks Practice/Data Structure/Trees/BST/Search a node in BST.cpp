Node *find(Node *root, int x)
{
    if (!root)
        return NULL;
    if (x < root->data)
        return find(root->left, x);
    else if (x > root->data)
        return find(root->right, x);
    else
        return root;
}
bool search(Node *root, int x)
{
    Node *res = find(root, x);
    return res != NULL;
}
