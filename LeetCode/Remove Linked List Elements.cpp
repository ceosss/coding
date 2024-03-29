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
        ListNode *removeElements(ListNode *head, int val)
        {
            ListNode *toDelete;
            ListNode *itr = head;
            // 1 1 2 1 1 3 4 1
            while (itr && itr->val == val)
            {
                toDelete = itr;
                itr = itr->next;
                head = itr;
                delete toDelete;
            }
            itr = head;
            while (itr && itr->next)
            {
                if (itr->next->val == val)
                {
                    toDelete = itr->next;
                    itr->next = toDelete->next;
                    delete toDelete;
                }
                else
                {
                    itr = itr->next;
                }
            }
            return head;
        }
    };
    // ListNode *removeElements(ListNode *head, int val)
    // {
    //     ListNode *temp = head, *del;

    //     while (temp && temp->val == val)
    //     {
    //         del = temp;
    //         if (temp->next == NULL)
    //             return NULL;
    //         else
    //             temp = temp->next;
    //         head = temp;
    //         delete del;
    //     }

    //     while (temp && temp->next)
    //     {
    //         if (temp->next->val == val)
    //         {
    //             del = temp->next;
    //             temp->next = del->next;
    //             delete del;
    //         }
    //         else
    //         {
    //             temp = temp->next;
    //         }
    //     }
    //     return head;
    // }
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
