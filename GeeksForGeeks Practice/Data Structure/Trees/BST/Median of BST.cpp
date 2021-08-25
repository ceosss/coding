
int count(struct Node *root)
{
    if (!root)
        return 0;
    return count(root->left) + count(root->right) + 1;
}
void median(struct Node *root, struct Node *&cur, struct Node *&prev, int &k)
{
    if (!root)
        return;
    median(root->left, cur, prev, k);
    if (cur)
        return;
    if (--k == 0)
    {
        cur = root;
        return;
    }
    prev = root;
    median(root->right, cur, prev, k);
}
float findMedian(struct Node *root)
{
    int n = count(root);
    int k = (n / 2) + 1;
    struct Node *cur = NULL, *prev = NULL;
    median(root, cur, prev, k);
    if (n % 2 == 0)
        return (cur->data + prev->data) / (double)2;
    else
        return cur->data;
}

// void inorder(struct Node *root, vector<int> &res)
// {
//     if (!root)
//         return;
//     inorder(root->left, res);
//     res.push_back(root->data);
//     inorder(root->right, res);
// }
// float findMedian(struct Node *root)
// {
//     // 1 2 3 4 5 6
//     vector<int> v;
//     inorder(root, v);
//     int n = v.size();
//     if (n % 2 == 0)
//         return (v[n / 2] + v[(n / 2) - 1]) / (double)2;
//     else
//         return v[n / 2];
// }