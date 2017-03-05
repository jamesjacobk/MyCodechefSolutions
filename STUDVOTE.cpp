#include <iostream>
#include <cstdio>
#define max 100

using namespace std;

int STUDVOTE()
{
	int t, k, n, count;
	scanf("%d", &t);
	while (t--)
	{
		count = 0;
		scanf("%d %d", &n, &k);
		int a[max], b[max];
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 1; i <= n; ++i)
		{
			if (a[i] != i)
			{
				++b[a[i]];
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			if (b[i] >= k)
			{
				++count;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}