#include <cstdio>

int FLOW014()
{
	int t;
	float h, c, s;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%g %g %g", &h, &c, &s);
		if (h > 50 && c < 0.7 && s > 5600)
		{
			printf("10\n");
		}
		else if (h > 50 && c < 0.7 && s <= 5600)
		{
			printf("9\n");
		}
		else if (h <= 50 && c < 0.7 && s > 5600)
		{
			printf("8\n");
		}
		else if (h > 50 && c >= 0.7 && s > 5600)
		{
			printf("7\n");
		}
		else if (h <= 50 && c >= 0.7 && s <= 5600)
		{
			printf("5\n");
		}
		else
		{
			printf("6\n");
		}
	}
	return 0;
}