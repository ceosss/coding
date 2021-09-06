/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 && !l2)
            return l1;
        if (!l1 && l2)
            return l2;
        if (!l1 && !l2)
            return NULL;

        ListNode *head = NULL;
        ListNode *node = new ListNode();

        if (l1->val < l2->val)
        {
            node->val = l1->val;
            l1 = l1->next;
        }
        else
        {
            node->val = l2->val;
            l2 = l2->next;
        }

        head = node;
        ListNode *temp = head;

        while (l1 && l2)
        {
            ListNode *n = new ListNode();
            if (l1->val < l2->val)
            {
                n->val = l1->val;
                l1 = l1->next;
            }
            else
            {
                n->val = l2->val;
                l2 = l2->next;
            }
            temp->next = n;
            temp = temp->next;
        }

        while (l1)
        {
            ListNode *n = new ListNode(l1->val);
            temp->next = n;
            l1 = l1->next;
            temp = temp->next;
        }

        while (l2)
        {
            ListNode *n = new ListNode(l2->val);
            temp->next = n;
            l2 = l2->next;
            temp = temp->next;
        }

        return head;
    }
};
