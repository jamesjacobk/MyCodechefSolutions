#include <cstdio>

int FLOW013()
{
	int t;
	float a, b, c;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%g %g %g", &a, &b, &c);
		if (a + b + c == 180 && a != 0 && b != 0 && c!= 0)
		{ 
			printf("YES\n");
		}
		else { printf("NO\n"); }
	}
	getchar();
	getchar();
	return 0;
}