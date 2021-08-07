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
        vector<int> list;
        ListNode *itr = head;
        while (itr)
        {
            list.push_back(itr->val);
            itr = itr->next;
        }
        int n = list.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (list[i] != list[n - i - 1])
                return false;
        }
        return true;
    }
    // bool isPalindrome(ListNode *head)
    // {
    //     ListNode *temp = head;
    //     stack<int> a;
    //     while (temp)
    //     {
    //         a.push(temp->val);
    //         temp = temp->next;
    //     }
    //     while (head != NULL)
    //     {
    //         int t = a.top();
    //         a.pop();
    //         if (t != head->val)
    //             return false;
    //         head = head->next;
    //     }
    //     return true;
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
