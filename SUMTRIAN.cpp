#include <stdio.h>
#include <cmath>

using namespace std;

int SUMTRIAN()
{
	int t, lines;
	scanf("%d", &t);
	int a[100][100];
	while (t--)
	{
		scanf("%d", &lines);
		for (int i = 0; i < lines; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				scanf("%d", &a[i][j]);
			}
		}

		for (int i = lines - 2; i >= 0; --i)
		{
			for (int j = 0; j <= i; ++j)
			{
				a[i][j] = (a[i][j] + a[i + 1][j]) > (a[i][j] + a[i + 1][j + 1]) ? a[i][j] + a[i + 1][j] : a[i][j] + a[i + 1][j + 1];
			}
		}
		printf("%d\n", a[0][0]);
		return 0;
	}
}