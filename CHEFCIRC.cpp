#include <iostream>
#include <math.h>
#include <stdlib.h>

#define max 500

using namespace std;

int CHEFCIRC()
{
	int n, m, count = 0;
	float radius = 0.00001;
	int x[max], y[max];
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i] >> y[i];
	}
	while (count != n)
	{
		for (int i = 0; i < n; ++i)
		{
			if (abs(x[i]) + abs(y[i]) <= radius)
			{
				++count;
			}
		}
		radius += 0.00001;
	}
	printf("%0.5f", radius);
	getchar();
	getchar();
	return 0;
}