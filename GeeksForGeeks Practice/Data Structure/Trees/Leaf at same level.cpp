class Solution
{
public:
    int max = INT_MIN;
    void checkIt(Node *root, int h, bool &res)
    {
        if (!root || !res)
            return;
        if (!root->left && !root->right)
        {
            if (max == INT_MIN)
                max = h;
            else if (max != h)
                res = false;
        }
        checkIt(root->left, h + 1, res);
        checkIt(root->right, h + 1, res);
    }
    bool check(Node *root)
    {
        bool res = true;
        checkIt(root, 0, res);
        return res;
    }
};