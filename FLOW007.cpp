#include<cstdio>

int FLOW007()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int num, rev = 0, digit;
		scanf("%d", &num);
		while (num != 0)
		{
			digit = num % 10;
			rev = rev * 10 + digit;
			num /= 10;
		}
		printf("%d\n", rev);
	}
	return 0;
}