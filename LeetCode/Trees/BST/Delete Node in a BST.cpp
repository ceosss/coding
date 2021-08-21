class Solution
{
public:
    TreeNode *inOrderSuc(TreeNode *root)
    {
        root = root->right;
        while (root && root->left)
            root = root->left;
        return root;
    }
    TreeNode *deleteNode(TreeNode *root, int x)
    {
        if (!root)
            return NULL;
        if (x < root->val)
            root->left = deleteNode(root->left, x);
        else if (x > root->val)
            root->right = deleteNode(root->right, x);
        else
        {
            if (!root->left && !root->right)
            {
                delete root;
                return NULL;
            }
            else if (root->left && !root->right)
            {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }
            else if (!root->left && root->right)
            {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }
            else
            {
                TreeNode *suc = inOrderSuc(root);
                root->val = suc->val;
                root->right = deleteNode(root->right, suc->val);
                return root;
            }
        }
        return root;
    }
};