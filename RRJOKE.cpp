#include<iostream>

using namespace std;

int RRJOKE()
{
	int t, n, i, result, x, y;
	cin >> t;
	while (t--)
	{
		result = 0;
		cin >> n;
		for (i = 1; i <= n; ++i)
		{
			cin >> x >> y;
			result ^= i;
		}
		cout << result << endl;
	}
	return 0;
}