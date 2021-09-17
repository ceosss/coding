class Solution
{
public:
    //Function to convert binary tree to doubly linked list and return it.
    void inorder(Node *root, Node *&prev, Node *&head, bool &flag)
    {
        if (!root)
        {
            return;
        }
        inorder(root->left, prev, head, flag);
        if (prev)
        {
            prev->right = root;
            root->left = prev;
        }
        prev = root;
        if (!flag)
        {
            head = prev;
            flag = true;
        }
        inorder(root->right, prev, head, flag);
    }
    Node *bToDLL(Node *root)
    {
        Node *head = NULL;
        Node *prev = NULL;
        bool flag = false;
        inorder(root, prev, head, flag);
        return head;
    }
};
