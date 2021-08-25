class Node
{
public:
    Node *left;
    int data;
    Node *right;
    Node(int x)
        data = x;
};
Node *insert(Node *root, int x, Node *&suc)
{
    if (!root)
        return new Node(x);
    if (x < root->data)
    {
        suc = root;
        root->left = insert(root->left, x, suc);
    }
    else
        root->right = insert(root->right, x, suc);
    return root;
}
int *replace(int *a, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        Node *suc = NULL;
        root = insert(root, a[i], suc);
        if (suc)
            a[i] = suc->data;
        else
            a[i] = -1;
    }
    return a;
}