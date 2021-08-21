class Solution
{
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> res;
        queue<Node *> q;
        if (!root)
            return res;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            while (size--)
            {
                if (size == 0)
                    res.push_back(q.front()->data);
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
};
