#include <cstdio>

int FLOW002()
{
	int t, a, b;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a % b);
	}
	return 0;
}