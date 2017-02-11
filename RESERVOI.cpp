#include <cstdio>

using namespace std;

int RESERVOI()
{
	int t, n, m;
	bool isSet;
	char resv[1000][1000] = { 'X' };
	scanf("%d\n", &t);
	while (t--)
	{
		isSet = false;
		scanf("%d %d\n", &n, &m);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf("%c", &resv[i][j]);
			}
			if (i != n - 1)
				scanf("\n");
		}


		//boundary check
		for (int i = 0; i < n; ++i)
		{
			if (!isSet)
			{
				if (i == 0 || i == n - 1)
				{
					for (int j = 0; j < m; ++j)
					{
						if (resv[i][j] == 'W')
						{
							printf("no\n");
							isSet = true;
							break;
						}
						if (resv[i][j] == 'B' && resv[i+1][j] == 'A')
						{
							printf("no\n");
							isSet = true;
							break;
						}
					}
				}
				else
				{
					if (resv[i][0] == 'W' || resv[i][m - 1] == 'W')
					{
						printf("no\n");
						isSet = true;
						break;
					}
					if (resv[i][0] == 'B' && resv[i + 1][m-1] == 'A')
					{
						printf("no\n");
						isSet = true;
						break;
					}
				}
			}
			else
			{
				break;
			}
		}

		//internal area check
		if (!isSet)
		{
			for (int i = 1; i < n -1 ; ++i)
			{
				if (!isSet)
				{
					for (int j = 1; i < m - 1; ++j)
					{
						if (resv[i][j] == 'W')
						{
							if (resv[i][j - 1] == 'A' || resv[i][j + 1] == 'A' || resv[i + 1][j] == 'A')
							{
								printf("no\n");
								isSet = true;
								break;
							}
						}
						if (resv[i][j] == 'B')
						{
							if (resv[i + 1][j] == 'A')
							{
								printf("no\n");
								isSet = true;
								break;
							}
						}
					}
				}
				else
				{
					break;
				}
			}
		}
		if (!isSet)
		{
			printf("yes\n");
		}

	}

	getchar();
	getchar();
	return 0;
}