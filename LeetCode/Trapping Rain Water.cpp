class Solution
{
public:
    int trap(vector<int> &height)
    {
        // TC - o(n)
        // SC - o(1)
        int n = height.size();
        int lm = height[0];
        int rm = height[n - 1];
        int total = 0;
        int start = 1;
        int end = n - 1;
        while (start <= end)
        {
            if (lm < rm)
            {
                if (height[start] >= lm)
                {
                    lm = height[start];
                }
                else
                {
                    total += lm - height[start];
                }
                start++;
            }
            else
            {
                if (height[end] >= rm)
                {
                    rm = height[end];
                }
                else
                {
                    total += rm - height[end];
                }
                end--;
            }
        }
        return total;
        // TC - o(n)
        // SC - o(n)
        // int n = height.size();
        // vector<int>left(n,0);
        // vector<int>right(n,0);
        // int l = INT_MIN;
        // int r = INT_MIN;
        // for(int i = 0; i < n; i++)
        // {
        //     l = max(l,height[i]);
        //     left[i] = l;
        // }
        // for(int i = n-1; i >= 0; i--)
        // {
        //     r = max(r,height[i]);
        //     right[i] = r;
        // }
        // int total = 0;
        // for(int i = 1; i < n-1; i++)
        // {
        //     total += min(left[i],right[i])-height[i];
        // }
        // return total;
    }
};