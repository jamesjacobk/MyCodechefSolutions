#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int CHEFSTLT()
{
	int t, min, max;
	string x, y;
	scanf("%d", &t);
	while (t--)
	{
		min = max = 0;
		cin >> x;
		cin >> y;
		for (int i = 0; i < x.length(); ++i)
		{
			if (x[i] != y[i])
			{
				++max;
				if (x[i] != '?' && y[i] != '?')
					++min;
			}
			if (x[i] == '?' && y[i] == '?')
				++max;
		}
		printf("%d %d\n", min, max);
	}
	return 0;
}