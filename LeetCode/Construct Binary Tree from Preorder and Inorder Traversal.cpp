/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int find(vector<int> inorder, int x)
    {
        for (int i = 0; i < inorder.size(); i++)
        {
            if (inorder[i] == x)
                return i;
        }
        return -1;
    }
    TreeNode *buildIt(vector<int> &preorder, vector<int> &inorder, int &index, int start, int end)
    {
        if (start > end)
            return NULL;
        TreeNode *newNode = new TreeNode(preorder[index++]);
        int i = find(inorder, newNode->val);
        newNode->left = buildIt(preorder, inorder, index, start, i - 1);
        newNode->right = buildIt(preorder, inorder, index, i + 1, end);
        return newNode;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int index = 0;
        return buildIt(preorder, inorder, index, 0, preorder.size() - 1);
    }
};