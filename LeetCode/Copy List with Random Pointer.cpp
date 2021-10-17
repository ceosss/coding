class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        // TC - o(n)
        // SC - o(1)
        Node *temp = head;
        while (temp)
        {
            Node *newnode = new Node(temp->val);
            newnode->next = temp->next;
            temp->next = newnode;
            temp = temp->next->next;
        }
        temp = head;
        while (temp)
        {
            temp->next->random = temp->random ? temp->random->next : NULL;
            temp = temp->next->next;
        }
        Node *head2 = NULL;
        Node *temp2 = NULL;
        temp = head;
        while (temp)
        {
            Node *node = temp->next;
            temp->next = node->next;
            temp = temp->next;
            if (!head2)
            {
                head2 = node;
                temp2 = head2;
            }
            else
            {
                temp2->next = node;
                temp2 = temp2->next;
            }
        }
        return head2;
        // TC - o(n)
        // SC - o(n)
        // unordered_map<Node *, Node *> m;
        // Node *temp = head;
        // while (temp)
        // {
        //     m[temp] = new Node(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while (temp)
        // {
        //     m[temp]->next = m[temp->next];
        //     m[temp]->random = m[temp->random];
        //     temp = temp->next;
        // }
        // return m[head];
    }
};
