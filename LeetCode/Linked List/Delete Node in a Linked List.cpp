class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // TC - o(1)
        // SC - o(1)
        ListNode *del = node->next;
        node->val = del->val;
        if (!del->next)
        {
            node->next = NULL;
        }
        else
        {
            node->next = del->next;
        }
        delete del;
    }
};