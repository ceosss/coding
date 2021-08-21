/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')      itr = itr->right;
    Node *suc(Node *itr)
    {
        while (itr && itr->left)
            itr = itr->left;
        return itr;
    }
    Node *inOrderSuccessorResult(Node *itr, Node *x, Node *&successor)
    {
        if (x->data == itr->data)
        {
            if (itr->right)
            {
                successor = suc(itr->right);
            }
            return successor;
        }
        else if (x->data > itr->data)
        {
            inOrderSuccessorResult(itr->right, x, successor);
        }
        else
        {
            successor = itr;
            inOrderSuccessorResult(itr->left, x, successor);
        }
    }
    Node *inOrderSuccessor(Node *root, Node *x)
    {
        Node *successor = NULL;
        inOrderSuccessorResult(root, x, successor);
        return successor;
    }
};