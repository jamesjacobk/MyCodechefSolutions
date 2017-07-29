#include <cstdio>
#include <iostream>

using namespace std;

int MNMX()
{
	int t, n, a, min;
	bool firsttime;
	scanf("%d", &t);
	while (t--)
	{
		firsttime = true;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a);
			if (firsttime)
			{
				min = a;
				firsttime = false;
			}
			if (a < min)
			{
				min = a;
			}
		}
		printf("%u\n", min * (n - 1));
	}
	return 0;
}