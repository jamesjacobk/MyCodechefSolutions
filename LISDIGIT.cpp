#include <cstdio>

int LISDIGIT()
{
	int n, m, a;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &a);
			printf("%d", a);
		}
		printf("\n");
	}
	return 0;
}