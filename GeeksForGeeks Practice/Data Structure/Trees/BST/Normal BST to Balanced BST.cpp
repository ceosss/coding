void inorder(Node *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
Node *build(vector<int> in, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = (start + end) / 2;
    Node *root = new Node(in[mid]);
    root->left = build(in, start, mid - 1);
    root->right = build(in, mid + 1, end);
    return root;
}
Node *buildBalancedTree(Node *root)
{
    vector<int> in;
    inorder(root, in);
    sort(in.begin(), in.end());
    return build(in, 0, in.size() - 1);
}