
int isSumProperty(Node *itr)
{
    if (!itr || (!itr->left && !itr->right))
        return 1;

    int left = !itr->left ? 0 : itr->left->data;
    int right = !itr->right ? 0 : itr->right->data;
    if ((itr->data == left + right) && isSumProperty(itr->left) && isSumProperty(itr->right))
        return 1;
    else
        return 0;
}