vector<int> diagonal(Node *root)
{
    vector<int> res;
    if (!root)
        return res;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        while (root)
        {
            res.push_back(root->data);
            if (root->left)
                q.push(root->left);
            root = root->right;
        }
    }
    return res;
}