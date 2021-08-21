int checkIfBalanced(Node *root, bool &balanced)
{
    if (!root)
        return 0;
    int x = checkIfBalanced(root->left, balanced);
    int y = checkIfBalanced(root->right, balanced);
    if (abs(x - y) > 1)
        balanced = false;
    return max(x, y) + 1;
}

bool isBalanced(Node *root)
{
    bool balanced = true;
    checkIfBalanced(root, balanced);
    return balanced;
}