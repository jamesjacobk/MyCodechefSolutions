#include<cstdio>

int FLOW009()
{
	int t;
	float q, p;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%f %f", &q, &p);
		if (q > 1000)
			printf("%.6f\n", q*p - 0.1*q*p);
		else
			printf("%.6f\n", q*p);
	}
	return 0;
}