vector<int> leftView(Node *root)
{
    vector<int> res;
    queue<Node *> q;
    if (!root)
        return res;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        int data = q.front()->data;
        res.push_back(data);
        while (size--)
        {
            root = q.front();
            q.pop();
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }
    }
    return res;
}
