#include <algorithm>
#include <cstdio>


int compareab(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int FLOW017()
{
	int t, a[3];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		qsort(a, 3, sizeof(int), compareab);
		printf("%d\n", a[1]);
	}
	return 0;
}