class Solution
{
public:
    TreeNode *build(vector<int> ll, int start, int end)
    {
        if (start > end)
            return NULL;
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(ll[mid]);
        root->left = build(ll, start, mid - 1);
        root->right = build(ll, mid + 1, end);
        return root;
    }
    TreeNode *llToVector(ListNode *head)
    {
        vector<int> ll;
        while (head)
        {
            ll.push_back(head->val);
            head = head->next;
        }
        return build(ll, 0, ll.size() - 1);
    }
    TreeNode *sortedListToBST(ListNode *head)
    {
        return llToVector(head);
    }
};