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
        ListNode *head = NULL, *tail = NULL;

        if (l1 == NULL)
            return l2;

        if (l2 == NULL)
            return l1;

        if (l1->val > l2->val)
        {
            head = tail = l2;
            l2 = l2->next;
        }
        else
        {
            head = tail = l1;
            l1 = l1->next;
        }
        while (l1 && l2)
        {
            if (l1->val > l2->val)
            {
                tail->next = l2;
                l2 = l2->next;
            }
            else
            {
                tail->next = l1;
                l1 = l1->next;
            }
            tail = tail->next;
        }
        if (l1 == NULL)
            tail->next = l2;
        else if (l2 == NULL)
            tail->next = l1;
        return head;
    }
};

//
//        .--------------.
//        | Try First One|
//        '--------------'
//                |     .--------------.
//                |     |              |
//                V     V              |
//              .--------------.       |
//              |      AC.     |<---.  |
//              '--------------'    |  |
//              (True)|  |(False)   |  |
//           .--------'  |          |  |
//           |           V          |  |
//           |  .--------------.    |  |
//           |  |   Try Again  |----'  |
//           |  '--------------'       |
//           |                         |
//           |  .--------------.       |
//           '->| Try Next One |-------'
//              '--------------'
//
