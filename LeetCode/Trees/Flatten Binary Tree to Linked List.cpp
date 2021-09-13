class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        flatten(root->right);
        flatter(root->left);
        TreeNode *lc = root->left;
        TreeNode *rc = root->right;
        root->right = lc;
        root->left = NULL;
        TreeNode *temp = root;
        while (temp->right)
            temp = temp->right;
        temp->right = rc;
    }
};