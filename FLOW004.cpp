#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int FLOW004()
{
	int t, n, last;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		last = n % 10;
		while (n >= 10)
		{
			n /= 10;
		}
		printf("%d\n", n + last);
	}
	return 0;
}