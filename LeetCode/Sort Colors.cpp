class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int p0 = 0;
        int p2 = n - 1;
        int i = 0;
        while (i <= p2)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[p0]);
                i++;
                p0++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[p2]);
                p2--;
            }
            else
            {
                i++;
            }
        }
    }
};