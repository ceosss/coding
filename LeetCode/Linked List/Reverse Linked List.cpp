class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *nxt;
        while (cur)
        {
            nxt = cur->next;

            cur->next = prev;

            prev = cur;
            cur = nxt;
        }
        return prev;
    }
};