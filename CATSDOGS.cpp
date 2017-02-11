#include <cstdio>
#include <iostream>

using namespace std;

int CATSDOGS()
{
	int t, c, d, l;
	bool flag;
	scanf("%d", &t);
	while (t--)
	{
		flag = true;
		scanf("%d %d %d", &c, &d, &l);
		if (l < (d * 4) || l > (d * 4) + (c * 4))
		{
			flag = false;
		}
		else 
		{
			if (l % 4 != 0) { flag = false; }
			else { flag = true; }
		}
		if (flag == false) { printf("no\n"); }
		else { printf("yes\n"); }
	}
	return 0;
}