/*The structure of the Binary Tree Node  is
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};*/

class Solution
{
public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    map<string, int> m;
    string check(Node *root)
    {
        if (!root)
            return "$";
        string x = check(root->left);
        string y = check(root->right);
        string res = "";
        res = res + root->data + x + y;
        if (root->left || root->right)
            m[res]++;
        return res;
    }
    int dupSub(Node *root)
    {
        check(root);
        for (auto i : m)
        {
            if (i.second > 1)
                return 1;
        }
        return 0;
    }
};
