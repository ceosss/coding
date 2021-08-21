class Solution
{
public:
    int convert(Node *root)
    {
        if (!root)
            return 0;
        int x = convert(root->left);
        int y = convert(root->right);
        int z = root->data;
        root->data = x + y;
        return x + y + z;
    }
    void toSumTree(Node *node)
    {
        convert(node);
    }
};
