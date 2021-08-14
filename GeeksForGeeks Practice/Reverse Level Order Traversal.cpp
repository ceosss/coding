vector<int> reverseLevelOrder(Node *root)
{
    vector<int> result;
    queue<Node *> q;
    stack<int> s;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        s.push(root->data);
        if (root->right)
            q.push(root->right);
        if (root->left)
            q.push(root->left);
    }
    while (!s.empty())
    {
        result.push_back(s.top());
        s.pop();
    }
    return result;
}