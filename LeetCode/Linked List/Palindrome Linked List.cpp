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
        // SC - o(n)
        vector<int> traversal;
        while (head)
        {
            traversal.push_back(head->val);
            head = head->next;
        }

        int start = 0;
        int end = traversal.size() - 1;
        while (start < end)
        {
            if (traversal[start] != traversal[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
