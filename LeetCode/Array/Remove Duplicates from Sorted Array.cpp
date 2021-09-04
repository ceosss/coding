class Solution
{
public:
    int removeDuplicates(vector<int> &a)
    {
        // TC - o(n)
        int i = 0, j = 1, n = a.size();
        if (n == 0)
            return 0;
        while (j < n)
        {
            if (a[i] != a[j])
            {
                i++;
                a[i] = a[j];
            }
            j++;
        }
        return i + 1;
        // TC - o(nlogn)
        // int k = 0;
        // map<int,int>m;
        // for(auto i: a)
        //     m[i]++;
        // int i=0;
        // for(auto it: m)
        // {
        //     a[i]=it.first;
        //     i++;
        //     k++;
        // }
        // return k;
    }
};