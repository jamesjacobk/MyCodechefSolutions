#include <iostream>
#include <cstdio>

using namespace std;

int VCS()
{
	int t, n, m, k, counta, countb, val;
	int a[100], b[100];
	scanf("%d", &t);
	while (t--)
	{

		scanf("%d %d %d", &n, &m, &k);

		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &a[i]);
		}

		for (int i = 0; i < k; ++i)
		{
			scanf("%d", &b[i]);
		}
		counta = countb = 0;
		for (int i = 1; i <= n; ++i)
		{
			val = 0;
			for (int j = 0; j < m; ++j)
			{
				if (i == a[j])
				{
					++val;
					break;
				}
			}
			for (int j = 0; j < k; ++j)
			{
				if (i == b[j])
				{
					++val;
					break;
				}
			}
			if (val == 2)
			{
				++counta;
			}
			else if (val == 0)
			{
				++countb;
			}
		}

		printf("%d %d\n", counta, countb);
	}
	return 0;
}