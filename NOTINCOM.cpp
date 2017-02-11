#include <cstdio>
#define max 1000

using namespace std;

int NOTINCOM()
{
	int t, alice, berta, a[max], b[max], count;
	scanf("%d", &t);
	while (t--)
	{
		count = 0;
		scanf("%d %d\n", &alice, &berta);
		for (int p = 0; p < alice; ++p)
		{
			scanf("%d", &a[p]);
		}
		for (int q = 0; q < berta; ++q)
		{
			scanf("%d", &b[q]);
		}
		for (int i = 0; i < alice; ++i)
		{
			for (int j = 0; j < berta; ++j)
			{
				if (a[i] == b[j])
				{
					++count;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}