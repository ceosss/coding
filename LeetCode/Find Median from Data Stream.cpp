class MedianFinder
{
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;

public:
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (left.size() == 0 && right.size() == 0)
        {
            left.push(num);
        }
        else
        {
            if (num > left.top())
            {
                right.push(num);
            }
            else
            {
                left.push(num);
            }
            if (left.size() > right.size() + 1)
            {
                right.push(left.top());
                left.pop();
            }
            if (right.size() > left.size())
            {
                left.push(right.top());
                right.pop();
            }
        }
    }

    double findMedian()
    {
        if (left.size() == right.size())
        {
            return (left.top() + right.top()) / 2.0;
        }
        else
        {
            return left.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */