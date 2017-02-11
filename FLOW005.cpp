#include <iostream>

using namespace std;

int FLOW005()
{
	int t, value, count;
	scanf("%d", &t);
	while (t--)
	{
		count = 0;
		scanf("%d", &value);
		count += value / 100;
		value %= 100;
		count += value / 50;
		value %= 50;
		count += value / 10;
		value %= 10;
		count += value / 5;
		value %= 5;
		count += value / 2;
		value %= 2;
		if (value != 0)
			++count;
		printf("%d\n", count);
	}
	return 0;
}