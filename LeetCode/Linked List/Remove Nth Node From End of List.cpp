class Solution
{
public:
    // 1 2 3 4 5
    // n = 2
    // total = 5
    // delete = total - n + 1 = 5 -2 + 1 = 4
    int count(ListNode *head)
    {
        int c = 0;
        while (head)
        {
            c++;
            head = head->next;
        }
        return c;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int total = count(head);
        int k = total - n;
        if (k == 0)
        {
            ListNode *del = head;
            head = head->next;
            delete del;
        }
        else
        {
            ListNode *temp = head;
            ListNode *del;
            for (int i = 1; i < k; i++)
                temp = temp->next;
            if (!temp->next->next)
            {
                del = temp->next;
                temp->next = NULL;
                delete del;
            }
            else
            {
                del = temp->next;
                temp->next = del->next;
                delete del;
            }
        }
        return head;
    }
};