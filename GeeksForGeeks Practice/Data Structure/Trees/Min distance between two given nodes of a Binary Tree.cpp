class Solution
{
public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node *LCA(Node *root, int a, int b)
    {
        if (!root)
            return NULL;
        if (root->data == a || root->data == b)
            return root;
        Node *left = LCA(root->left, a, b);
        Node *right = LCA(root->right, a, b);
        if (left && right)
            return root;
        else
            return left ? left : right;
    }
    int distance(Node *root, int x)
    {
        if (!root)
            return 0;
        if (root->data == x)
            return 1;
        int left = distance(root->left, x);
        int right = distance(root->right, x);
        if (!left && !right)
            return 0;
        else
            return left + right + 1;
    }
    int findDist(Node *root, int a, int b)
    {
        Node *lca = LCA(root, a, b);
        int d1 = distance(lca, a);
        int d2 = distance(lca, b);
        return d1 + d2 - 2;
    }
};