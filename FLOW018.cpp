#include <cstdio>


long long factorial(int fact)
{
	for(int i = fact - 1; i > 0; --i)
		fact = fact * i;
	return fact;
}

int FLOW018()
{
	int t, num;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &num);
		printf("%lld\n", factorial(num));
	}
	return 0;
}