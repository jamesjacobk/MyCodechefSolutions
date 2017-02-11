#include <cstdio>

int FLOW001()
{
	int t, a, b;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}