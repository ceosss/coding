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
    int len(ListNode *head)
    {
        int l = 0;
        while (head)
        {
            l++;
            head = head->next;
        }
        return l;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        bool carry = false;
        int s1 = len(l1);
        int s2 = len(l2);
        ListNode *temp1, *temp2;
        if (s1 > s2)
        {
            temp1 = l1;
            temp2 = l2;
        }
        else
        {
            temp1 = l2;
            temp2 = l1;
        }
        while (temp1)
        {
            int sum = temp1->val;
            if (temp2)
            {
                sum += temp2->val;
            }
            if (carry)
            {
                sum += 1;
                carry = false;
            }
            if (sum >= 10)
            {
                temp1->val = sum % 10;
                carry = true;
            }
            else
            {
                temp1->val = sum;
            }
            if (!temp1->next)
            {
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2 ? temp2->next : NULL;
        }
        if (carry)
        {
            ListNode *node = new ListNode(1);
            temp1->next = node;
        }
        return s1 > s2 ? l1 : l2;
    }
};