class Solution
{
public:
    TreeNode *convert(vector<int> nums, int start, int end)
    {
        if (start > end)
            return NULL;
        int mid = (start + end) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = convert(nums, start, mid - 1);
        node->right = convert(nums, mid + 1, end);
        return node;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        TreeNode *root = convert(nums, 0, nums.size() - 1);
        return root;
    }
};