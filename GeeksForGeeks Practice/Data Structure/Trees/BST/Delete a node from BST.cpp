//Function to delete a node from BST.
Node *inOrderSuc(Node *root)
{
    root = root->right;
    while (root && root->left)
        root = root->left;
    return root;
}

Node *
deleteNode(Node *root, int x)
{
    if (!root)
        return NULL;
    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else
    {
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        else if (root->left && !root->right)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (!root->left && root->right)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {
            Node *suc = inOrderSuc(root);
            root->data = suc->data;
            root->right = deleteNode(root->right, suc->data);
            return root;
        }
    }
}
