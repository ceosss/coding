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
    TreeNode *buildIt(vector<int> &inorder, vector<int> &postorder, int &index, int start, int end)
    {
        if (start > end)
            return NULL;
        TreeNode *newNode = new TreeNode(postorder[index--]);
        int i = find(inorder, newNode->val);
        newNode->right = buildIt(inorder, postorder, index, i + 1, end);
        newNode->left = buildIt(inorder, postorder, index, start, i - 1);
        return newNode;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int index = postorder.size() - 1;
        return buildIt(inorder, postorder, index, 0, postorder.size() - 1);
    }
};