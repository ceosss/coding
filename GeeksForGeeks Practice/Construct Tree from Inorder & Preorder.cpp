class Solution
{
public:
    int find(int a[], int n, int x)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                return i;
        }
        return -1;
    }
    Node *build(int in[], int pre[], int &index, int start, int end, int n)
    {
        if (start > end)
            return NULL;
        Node *node = new Node(pre[index++]);
        int i = find(in, n, node->data);
        node->left = build(in, pre, index, start, i - 1, n);
        node->right = build(in, pre, index, i + 1, end, n);
        return node;
    }
    Node *buildTree(int in[], int pre[], int n)
    {
        int index = 0;
        return build(in, pre, index, 0, n - 1, n);
    }
};