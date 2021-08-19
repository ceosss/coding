class Solution
{
public:
    void find(TreeNode *root, int &sum)
    {
        if (!root)
            return;
        if (root->val % 2 == 0)
        {
            if (root->left && root->left->left)
                sum += root->left->left->val;
            if (root->left && root->left->right)
                sum += root->left->right->val;
            if (root->right && root->right->right)
                sum += root->right->right->val;
            if (root->right && root->right->left)
                sum += root->right->left->val;
        }
        find(root->left, sum);
        find(root->right, sum);
    }
    int sumEvenGrandparent(TreeNode *root)
    {
        int sum = 0;
        find(root, sum);
        return sum;
    }
};