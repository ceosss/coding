class Solution
{
public:
    vector<int> nextGreater(vector<int> a)
    {
        int n = a.size();
        vector<int> res(n, 0);
        stack<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && a[s.top()] <= a[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                res[i] = -1;
            }
            else
            {
                res[i] = s.top();
            }
            s.push(i);
        }
        return res;
    }

    vector<int> dailyTemperatures(vector<int> &temps)
    {
        // {7,73},{6,76}
        // [73,74,75,71,69,72,76,73]
        int n = temps.size();
        vector<int> res(n, 0);
        for (int i = n - 2; i >= 0; i--)
        {
            int j = i + 1;
            while (res[j] > 0 && temps[j] <= temps[i])
            {
                j += res[j];
            }
            if (temps[j] > temps[i])
            {
                res[i] = j - i;
            }
            else
            {
                res[i] = 0;
            }
        }
        return res;
        // TC - o(n)
        // SC - o(n)
        // int n = temps.size();
        // vector<int> next = nextGreater(temps);
        // for (int i = 0; i < n; i++)
        // {
        //     if (next[i] == -1)
        //     {
        //         temps[i] = 0;
        //     }
        //     else
        //     {
        //         temps[i] = next[i] - i;
        //     }
        // }
        // return temps;

        // TC - o(n^2)
        // SC - o(1)
        // int n = temps.size();
        // for(int i = 0; i < n; i++){
        //     int j = i + 1;
        //     while(j < n && temps[j] <= temps[i]){
        //         j++;
        //     }
        //     if(j == n){
        //         temps[i] = 0;
        //     }else{
        //         temps[i] = j - i;
        //     }
        // }
        // return temps;
    }
};