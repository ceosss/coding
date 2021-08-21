int arr[100000];
int i = 0;
// Function to return a list containing the inorder traversal of the tree.
void traverse(struct Node *root)
{
    if (!root)
        return;
    traverse(root->left);
    arr[i++] = root->data;
    traverse(root->right);
}
int *inOrder(struct Node *root)
{
    // code here
    traverse(root);
    return arr; // do not change the default values(i.e -1) in the unused array
                // indices.
}