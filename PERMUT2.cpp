#include <iostream>
#include <cstdio>

using namespace std;

int PERMUT2()
{
	int a[100], flag;
	int t;
	cin >> t;

	while (t != 0)
	{
		flag = 0;
		for (int i = 1; i <= t; ++i)
		{
			cin >> a[i];
		}

		// this method takes 4 seconds. The uncommented method takes 0.16 seconds.
		/*for (int i = 1; i <= t; ++i)
		{
			b[i] = distance(a, find(a, a + t, i));
			
		}*/

		for (int i = 1; i <= t; ++i)
		{
			if (a[a[i]] != i)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			printf("not ambiguous\n");
		}
		else
		{
			printf("ambiguous\n");
		}
			
		cin >> t;
	}
	getchar();
	return 0;
}