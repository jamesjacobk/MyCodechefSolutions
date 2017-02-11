#include <cstdio>
#include <math.h>

int FSQRT()
{
	int t, num;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &num);
		printf("%d\n", (int)sqrt(num));
	}
	return 0;
}