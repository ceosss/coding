class Solution
{
public:
    class BST
    {
    public:
        bool valid;
        int maxi;
        int mini;
        int sum;
        BST(bool _valid, int _maxi, int _mini, int _sum)
        {
            valid = _valid;
            maxi = _maxi;
            mini = _mini;
            sum = _sum;
        }
    };
    BST *postorder(TreeNode *root, int &res)
    {
        if (!root)
        {
            return new BST(true, INT_MIN, INT_MAX, 0);
        }
        BST *left = postorder(root->left, res);
        BST *right = postorder(root->right, res);
        int maxi = max(root->val, max(left->maxi, right->maxi));
        int mini = min(root->val, min(left->mini, right->mini));
        bool valid;
        int sum;
        if (root->val > left->maxi && root->val < right->mini && left->valid && right->valid)
        {
            valid = true;
            sum = root->val + left->sum + right->sum;
            res = max(res, sum);
        }
        else
        {
            valid = false;
            sum = 0;
        }
        return new BST(valid, maxi, mini, sum);
    }
    int maxSumBST(TreeNode *root)
    {
        int res = INT_MIN;
        postorder(root, res);
        return res < 0 ? 0 : res;
    }
};