class MinStack
{
    vector<int> stack;
    vector<int> min;

public:
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int val)
    {
        stack.push_back(val);
        if (min.size() != 0 && min.back() < val)
        {
            min.push_back(min.back());
        }
        else
        {
            min.push_back(val);
        }
    }

    void pop()
    {
        stack.pop_back();
        min.pop_back();
    }

    int top()
    {
        return stack.back();
    }

    int getMin()
    {
        return min.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */