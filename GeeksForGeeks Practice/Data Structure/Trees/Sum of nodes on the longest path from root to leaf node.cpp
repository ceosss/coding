class Solution
{
public:
    // pair<h,s>;
    pair<int, int> find(Node *root)
    {
        if (!root)
            return make_pair(0, 0);
        pair<int, int> l = find(root->left);
        pair<int, int> r = find(root->right);
        if (l.first > r.first)
            return make_pair(l.first + 1, l.second + root->data);
        else if (r.first > l.first)
            return make_pair(r.first + 1, r.second + root->data);
        else
            return make_pair(r.first + 1, max(l.second, r.second) + root->data);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        pair<int, int> res = find(root);
        return res.second;
    }
};