class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (!root)
            return NULL;
        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        else
            return root;
        // if (!root)
        //     return NULL;
        // if (root == p || root == q)
        //     return root;
        // TreeNode *left = lowestCommonAncestor(root->left, p, q);
        // TreeNode *right = lowestCommonAncestor(root->right, p, q);
        // if (left && right)
        //     return root;
        // else
        //     return left ? left : right;
    }
};