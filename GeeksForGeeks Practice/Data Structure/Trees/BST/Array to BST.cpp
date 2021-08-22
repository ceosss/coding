class Solution
{
public:
    struct Node
    {
        struct Node *left;
        int data;
        struct Node *right;
        Node(int x)
        {
            data = x;
        }
    };
    struct Node *convert(vector<int> nums, int start, int end)
    {

        if (start > end)
            return NULL;
        int mid = (start + end) / 2;
        struct Node *root = new Node(nums[mid]);
        root->left = convert(nums, start, mid - 1);
        root->right = convert(nums, mid + 1, end);
        return root;
    }
    void preOrder(struct Node *root, vector<int> &res)
    {
        if (!root)
            return;
        preOrder(root->left, res);
        res.push_back(root->data);
        preOrder(root->right, res);
    }
    vector<int>
    sortedArrayToBST(vector<int> &nums)
    {
        vector<int> res;
        struct Node *root = convert(nums, 0, nums.size() - 1);
        preOrder(root, res);
        return res;
    }
};