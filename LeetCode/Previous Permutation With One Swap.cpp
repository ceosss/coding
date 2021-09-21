class Solution
{
public:
    // Input: arr = [1,9,4,6,7]
    // Output: [1,7,4,6,9]
    // Explanation: Swapping 9 and 7.
    vector<int> prevPermOpt1(vector<int> &arr)
    {
        int n = arr.size();
        int pos = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            return arr;
        }
        int swapPos = pos + 1;
        for (int i = swapPos; i < n; i++)
        {
            if (arr[i] > arr[swapPos] && arr[i] < arr[pos])
            {
                swapPos = i;
            }
        }
        int temp = arr[pos];
        arr[pos] = arr[swapPos];
        arr[swapPos] = temp;
        return arr;
    }
};