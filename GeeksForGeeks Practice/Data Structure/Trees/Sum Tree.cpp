class Solution
{
public:
    int check(Node *root, bool &b)
    {
        if (!root)
            return 0;
        int l = check(root->left, b);
        int r = check(root->right, b);
        int d = root->data;
        if ((root->left || root->right) && d != l + r)
            b = false;
        return d + l + r;
    }
    bool isSumTree(Node *root)
    {
        bool res = true;
        check(root, res);
        return res;
    }
};