#include <iostream>
#define ll long long
using namespace std;

ll sumOfDigits(int n)
{
	ll sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{

	ll n;
	cin >> n;
	ll oneDsum, twoDsum, count = 0;

	for (int i = n - 97; i <= n; i++)
	{

		oneDsum = sumOfDigits(i);
		twoDsum = sumOfDigits(oneDsum);
		if (i + oneDsum + twoDsum == n)
			count++;
	}

	cout << count << endl;

	return 0;
}