/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int l1 = 0, l2 = 0;
        ListNode *temp1 = headA, *temp2 = headB;
        while (temp1)
        {
            l1++;
            temp1 = temp1->next;
        }
        while (temp2)
        {
            l2++;
            temp2 = temp2->next;
        }
        int diff = abs(l1 - l2);
        temp1 = headA;
        temp2 = headB;
        if (l1 > l2)
        {
            for (int i = 0; i < diff; i++)
                temp1 = temp1->next;
        }
        else
        {
            for (int i = 0; i < diff; i++)
            {
                temp2 = temp2->next;
            }
        }

        while (temp1 && temp2)
        {
            if (temp1 == temp2)
            {
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
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
