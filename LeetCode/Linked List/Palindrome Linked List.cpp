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
    bool isPalindrome(ListNode *head)
    {
        // TC - o(n)
        // SC - o(1)
        // find the mid element
        ListNode *mid = head;
        ListNode *fast = head;
        ListNode *last1 = head;
        while (fast && fast->next)
        {
            last1 = mid;
            mid = mid->next;
            fast = fast->next->next;
        }

        // disconnect elements after mid in original array
        last1->next = NULL;

        // reverse the second half of the ll
        ListNode *cur = mid;
        ListNode *prev = NULL;
        ListNode *nxt;

        while (cur)
        {
            nxt = cur->next;

            cur->next = prev;

            prev = cur;
            cur = nxt;
        }

        ListNode *head2 = prev;

        while (head && head2)
        {
            if (head->val != head2->val)
            {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }

        return true;
        // TC - o(n)
        // SC - o(n)
        // vector<int> traversal;
        // while (head)
        // {
        //     traversal.push_back(head->val);
        //     head = head->next;
        // }

        // int start = 0;
        // int end = traversal.size() - 1;
        // while (start < end)
        // {
        //     if (traversal[start] != traversal[end])
        //     {
        //         return false;
        //     }
        //     start++;
        //     end--;
        // }
        // return true;
    }
};
