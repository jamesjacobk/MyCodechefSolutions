#include <cstdio>

int gcd(int a, int  b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}


int FLOW016()
{
	int t, a, b, gcdab;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		gcdab = gcd(a, b);
		printf("%d %d\n", gcdab, a*b/gcdab);
	}
	return 0;
}