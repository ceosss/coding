/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
Node *predecessor(Node *itr)
{
    itr = itr->left;
    while (itr && itr->right)
        itr = itr->right;
    return itr;
}
Node *successor(Node *itr)
{
    itr = itr->right;
    while (itr && itr->left)
        itr = itr->left;
    return itr;
}
void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
    if (!root)
        return;
    if (root->key == key)
    {
        if (root->left)
            pre = predecessor(root);

        if (root->right)
            suc = successor(root);

        return;
    }
    else if (root->key > key)
    {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
    else
    {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
}