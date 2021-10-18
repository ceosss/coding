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
    ListNode *middle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = NULL;
        return mid;
    }
    ListNode *merge(ListNode *head1, ListNode *head2)
    {
        ListNode *head = new ListNode(-1);
        ListNode *temp = head;

        while (head1 && head2)
        {
            if (head1->val < head2->val)
            {
                temp->next = head1;
                head1 = head1->next;
            }
            else
            {
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }
        temp->next = head1 ? head1 : head2;
        return head->next;
    }
    ListNode *sortList(ListNode *head)
    {
        // TC - o(nlogn)
        // SC - o(1)
        if (!head || !head->next)
        {
            return head;
        }
        ListNode *mid = middle(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        return merge(left, right);
        // TC - o(nlogn)
        // SC - o(n)
        // vector<int>v;
        // ListNode *temp = head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }
        // sort(v.begin(),v.end());
        // temp = head;
        // int x = 0;
        // while(temp){
        //     temp->val = v[x++];
        //     temp = temp->next;
        // }
        // return head;
    }
};