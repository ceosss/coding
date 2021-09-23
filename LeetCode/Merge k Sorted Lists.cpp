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
    ListNode *merge(ListNode, ListNode);
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        // APPROACH - 3
        auto const comp = [](auto const &lhs, auto const &rhs)
        {
            return lhs.first > rhs.first;
        };
        priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *> >, decltype(comp)> pq(comp);
        for (auto i : lists)
        {
            if (i)
            {
                pq.push({i->val, i});
            }
        }
        ListNode *head = NULL;
        ListNode *temp;
        while (!pq.empty())
        {
            ListNode *cur = pq.top().second;
            pq.pop();
            if (!head)
            {
                head = cur;
                temp = cur;
            }
            else
            {
                temp->next = cur;
                temp = temp->next;
            }
            cur = cur->next;
            if (cur)
            {
                pq.push({cur->val, cur});
            }
        }
        return head;

        // APPROACH - 2
        // ListNode *head = NULL;
        // ListNode *temp = head;
        // vector<ListNode*>temps;
        // for(auto i: lists){
        //     temps.push_back(i);
        // }
        // while(1){
        //     int index = -1;
        //     int min = INT_MAX;
        //     for(int i = 0; i < temps.size(); i++){
        //         if(temps[i] && temps[i]->val < min){
        //             min = temps[i]->val;
        //             index = i;
        //         }
        //     }
        //     if(index == -1){
        //         break;
        //     }
        //     if(!head){
        //         head = temps[index];
        //         temp = head;
        //     }else{
        //         temp->next = temps[index];
        //         temp = temp->next;
        //     }
        //     temps[index] = temps[index]->next;
        // }
        // return head;
        // APPROACH - 1
        // ListNode *head = pq.top().second;
        // pq.pop();
        // ListNode *temp = head;
        // while(!pq.empty()){
        //     temp->next = pq.top().second;
        //     pq.pop();
        //     temp = temp->next;
        // }
        // return head;

        // APPROACH - 1
        // ListNode *head = NULL;
        // for (auto i : lists)
        // {
        //     head = merge(head, i);
        // }
        // return head;
    }
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        if (!l1 & !l2)
        {
            return NULL;
        }
        if (!l1 && l2)
        {
            return l2;
        }
        if (l1 && !l2)
        {
            return l1;
        }
        ListNode *head;
        if (l1->val < l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            l2 = l2->next;
        }
        ListNode *temp = head;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        while (l1)
        {
            temp->next = l1;
            temp = temp->next;
            l1 = l1->next;
        }
        while (l2)
        {
            temp->next = l2;
            temp = temp->next;
            l2 = l2->next;
        }
        return head;
    }
};