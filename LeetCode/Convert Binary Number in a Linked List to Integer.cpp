class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *temp = head;
        int num = 0;
        while (temp)
        {
            num = (num << 1) + temp->val;
            temp = temp->next;
        }
        return num;
    }
};

//=======
//  OR
//=======

// class Solution
// {
// public:
//     int pow(int n, int p)
//     {
//         int num = 1;
//         for (int i = 0; i < p; i++)
//         {
//             num *= n;
//         }
//         return num;
//     }
//     int getLength(ListNode *head)
//     {
//         ListNode *temp = head;
//         int c = 0;
//         while (temp)
//         {
//             c++;
//             temp = temp->next;
//         }
//         return c - 1;
//     }
//     int getDecimalValue(ListNode *head)
//     {
//         ListNode *temp = head;
//         int num = 0, i = getLength(head);
//         while (temp)
//         {
//             if (temp->val)
//             {
//                 num += pow(2, i);
//             }
//             i--;
//             temp = temp->next;
//         }
//         return num;
//     }
// };

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