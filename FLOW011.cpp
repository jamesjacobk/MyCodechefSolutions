#include <cstdio>

int FLOW011()
{
	int t, basic;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &basic);
		if (basic < 1500)
		{
			printf("%g\n", basic + (0.10 * basic) + (0.90 * basic));
		}
		else
		{
			printf("%g\n", basic + 500 + (0.98 * basic));
		}	
		
	}
	return 0;
}