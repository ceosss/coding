class Solution
{
public:
    void leftBoundary(Node *root, vector<int> &res)
    {
        if (!root)
            return;
        if (root->left || root->right)
            res.push_back(root->data);
        if (root->left)
            leftBoundary(root->left, res);
        else if (root->right)
            leftBoundary(root->right, res);
    }
    void leafBoundary(Node *root, vector<int> &res)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
            res.push_back(root->data);
        leafBoundary(root->left, res);
        leafBoundary(root->right, res);
    }
    void rightBoundary(Node *root, vector<int> &res)
    {
        if (!root)
            return;
        if (root->right)
            rightBoundary(root->right, res);
        else if (root->left)
            rightBoundary(root->left, res);
        if (root->left || root->right)
            res.push_back(root->data);
    }
    vector<int>
    printBoundary(Node *root)
    {
        vector<int> res;
        if (!root)
            return res;
        res.push_back(root->data);
        leftBoundary(root->left, res);
        leafBoundary(root, res);
        rightBoundary(root->right, res);
        return res;
    }
};
