class Solution
{
public:
    void check(Node *root, Node *&prev, bool &res)
    {
        if (!root)
            return;
        check(root->left, prev, res);
        if (prev && prev->data >= root->data)
        {
            res = false;
            return;
        }
        prev = root;
        check(root->right, prev, res);
    }
    bool isBST(Node *root)
    {
        bool res = true;
        Node *prev = NULL;
        check(root, prev, res);
        return res;
    }
};
// //Function to check whether a Binary Tree is BST or not.
// bool check(Node *root, Node *min, Node *max)
// {
//     if (!root)
//         return true;
//     if (min && root->data <= min->data)
//         return false;
//     if (max && root->data >= max->data)
//         return false;
//     return check(root->left, min, root) && check(root->right, root, max);
// }
// bool isBST(Node *root)
// {
//     return check(root, NULL, NULL);
// }
}
;