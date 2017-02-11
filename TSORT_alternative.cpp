#include <stdio.h>
#include <stdlib.h>


int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int TSORT_alternative()
{
	int t;
	scanf("%d", &t);
	int a[100];

	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &a[i]);
	}

	qsort(a, t, sizeof(int), compare);

	for (int i = 0; i < t; ++i)
	{
		printf("%d\n", a[i]);
	}
	return 0;

}