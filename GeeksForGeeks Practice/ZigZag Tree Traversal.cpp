//User function Template for C++
/*Structure of the node of the binary tree is as
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

//Function to store the zig zag order traversal of tree in a list.
vector<int> zigZagTraversal(Node *root)
{
    vector<int> res;
    if (!root)
        return res;
    queue<Node *> q;
    bool rev = false;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> curLevel;
        while (size--)
        {
            root = q.front();
            q.pop();
            curLevel.push_back(root->data);
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }
        if (rev)
        {
            for (int i = curLevel.size() - 1; i >= 0; i--)
                res.push_back(curLevel[i]);
        }
        else
        {
            for (int i = 0; i < curLevel.size(); i++)
                res.push_back(curLevel[i]);
        }
        rev = !rev;
    }
    return res;
}