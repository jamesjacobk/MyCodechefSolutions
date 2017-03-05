#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t, m, x, y, maxdist, reachleft, reachright, j, k, count;
	int arrhouses[102];
	int arrpolice[10];
	cin >> t;
	while (t--)
	{
		count = 0;
		for (int i = 1; i <= 100; ++i)
		{
			arrhouses[i] = i;
		}
		cin >> m >> x >> y;
		for (int i = 0; i < m; ++i)
		{
			cin >> arrpolice[i];
		}
		maxdist = x * y;
		for (int i = 0; i < m; ++i)
		{
			j = arrpolice[i];
			k = 0;
			while (k <= maxdist && arrhouses[j + k] <= 100)
			{
				arrhouses[j + k] = 0;
				++k;
			}
			k = 1;
			while (k <= maxdist && arrhouses[j - k] >= 1)
			{
				arrhouses[j - k] = 0;
				++k;
			}
		}
		for (int p = 1; p <= 100; ++p)
		{
			if (arrhouses[p] != 0)
				++count;
		}
		cout << count << endl;
	}
	return 0;
}