class Solution
{
public:
    void find(Node *root, int &k, int &res)
    {
        if (!root)
            return;
        find(root->right, k, res);
        if (--k == 0)
        {
            res = root->data;
            return;
        }
        find(root->left, k, res);
    }
    int kthLargest(Node *root, int k)
    {
        int res = -1;
        find(root, k, res);
        return res;
    }
};