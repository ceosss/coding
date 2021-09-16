class LRUCache
{
    class Node
    {
    public:
        int key;
        int value;
        Node *next;
        Node *prev;
        Node(int k, int val)
        {
            key = k;
            value = val;
            next = NULL;
            prev = NULL;
        }
    };
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    void addNode(Node *node)
    {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }
    void deleteNode(Node *node)
    {
        Node *before = node->prev;
        Node *after = node->next;
        before->next = after;
        after->prev = before;
        node->next = NULL;
        node->prev = NULL;
    }

    int _capacity;
    unordered_map<int, Node *> _map;

public:
    LRUCache(int capacity)
    {
        _capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key)
    {
        if (_map.find(key) != _map.end())
        {
            Node *node = _map[key];
            deleteNode(node);
            addNode(node);
            return node->value;
        }
        else
        {
            return -1;
        }
    }

    void put(int key, int value)
    {
        if (_map.find(key) != _map.end())
        {
            Node *node = _map[key];
            deleteNode(node);
            _map.erase(key);
            delete node;
        }

        if (_map.size() == _capacity)
        {
            Node *beforeTail = tail->prev;
            deleteNode(beforeTail);
            _map.erase(beforeTail->key);
        }
        Node *node = new Node(key, value);
        addNode(node);
        _map[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */