class Solution
{
public:
    void populate(Node *root, Node *&prev)
    {
        if (!root)
            return;
        populate(root->left, prev);
        if (prev)
            prev->next = root;
        prev = root;
        populate(root->right, prev);
    }
    void populateNext(Node *root)
    {
        Node *prev = NULL;
        populate(root, prev);
    }
};