class Solution
{
public:
    vector<int> prevSmaller();
    vector<int> nextSmaller();
    int largestRectangleArea(vector<int> &heights)
    {
        // TC - o(n)
        // SC - o(n)
        int n = heights.size();
        int res = INT_MIN;
        vector<int> left = prevSmaller(heights);
        vector<int> right = nextSmaller(heights);
        for (int i = 0; i < n; i++)
        {
            int cur = (right[i] - left[i] - 1) * heights[i];
            res = max(res, cur);
        }
        return res;
    }
    vector<int> prevSmaller(vector<int> a)
    {
        int n = a.size();
        vector<int> res(n, -1);
        stack<int> stack;
        for (int i = 0; i < n; i++)
        {
            while (!stack.empty() && a[stack.top()] >= a[i])
            {
                stack.pop();
            }
            if (stack.empty())
            {
                res[i] = -1;
            }
            else
            {
                res[i] = stack.top();
            }
            stack.push(i);
        }
        return res;
    }
    vector<int> nextSmaller(vector<int> a)
    {
        int n = a.size();
        vector<int> res(n, -1);
        stack<int> stack;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!stack.empty() && a[stack.top()] >= a[i])
            {
                stack.pop();
            }
            if (stack.empty())
            {
                res[i] = n;
            }
            else
            {
                res[i] = stack.top();
            }
            stack.push(i);
        }
        return res;
    }

    // TC - o(n^2)
    // SC - o(n)
    // int largestRectangleArea(vector<int> &heights)
    // {
    //     int n = heights.size();
    //     int res = INT_MIN;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int left = i - 1;
    //         while (left >= 0 && heights[left] >= heights[i])
    //         {
    //             left--;
    //         }
    //         left++;

    //         int right = i + 1;
    //         while (right < n && heights[right] >= heights[i])
    //         {
    //             right++;
    //         }
    //         right--;
    //         int cur = (right - left + 1) * heights[i];
    //         res = max(res, cur);
    //     }
    //     return res;
    // }
};