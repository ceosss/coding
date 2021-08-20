class Solution
{
public:
    int sum = 0;
    void findSum(TreeNode *root, int s)
    {
        if (!root)
            return;
        s = s * 10 + root->val;
        if (!root->left && !root->right)
            sum += s;
        findSum(root->left, s);
        findSum(root->right, s);
    }
    int sumNumbers(TreeNode *root)
    {
        findSum(root, 0);
        return sum;
    }
};