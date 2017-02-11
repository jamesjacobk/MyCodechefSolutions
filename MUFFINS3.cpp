#include <stdio.h>

using namespace std;

int MUFFINS3()
{
	int n, cakes;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &cakes);
		printf("%d\n", (cakes / 2) + 1);
	}
	return 0;
}