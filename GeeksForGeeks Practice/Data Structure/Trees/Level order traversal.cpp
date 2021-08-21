class Solution
{
public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        vector<int> result;
        queue<Node *> q;
        Node *itr;
        q.push(node);
        while (!q.empty())
        {
            itr = q.front();
            q.pop();
            result.push_back(itr->data);
            if (itr->left)
                q.push(itr->left);
            if (itr->right)
                q.push(itr->right);
        }
        return result;
    }
};