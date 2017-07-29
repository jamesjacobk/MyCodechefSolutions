#include <cstdio>
#include <iostream>

using namespace std;

int LCH15JAB()
{
	int t, countcurrent;
	bool set;
	string str;
	scanf("%d", &t);
	while (t--)
	{
		set = false;
		cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			countcurrent = 0;
			for (int i = 0; i < str.length(); ++i)
			{
				if (str[j] == str[i])
				{
					++countcurrent;
				}
			}
			if (countcurrent == str.length() - countcurrent)
			{

				set = true;
				break;
			}
		}
		if (set)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}