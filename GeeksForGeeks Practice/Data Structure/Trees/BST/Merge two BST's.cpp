class Solution
{
public:
    //Function to return a list of integers denoting the node
    //values of both the BST in a sorted order.
    void inorder(Node *root, vector<int> &v)
    {
        if (!root)
            return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> res;
        inorder(root1, res);
        inorder(root2, res);
        sort(res.begin(), res.end());
        return res;
    }
};