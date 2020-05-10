#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> b;
		int x, px, count = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (i > 0)
			{
				if (abs(x - px) <= 2)
				{
					// cout<<i<<" inabs "<<count<<endl;
					count++;
				}
				else
				{
					if (count != 0)
						b.push_back(count);
					count = 1;
					// cout<<i<<" inpush "<<count<<endl;
				}
			}
			px = x;
		}
		b.push_back(count);
		sort(b.begin(), b.end());
		cout << b[0] << " " << b[b.size() - 1] << endl;
	}
	return 0;
}