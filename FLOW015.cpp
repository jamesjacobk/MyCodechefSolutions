#include <cstdio>

int FLOW015()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int year, step = 0, now = 1900;
		scanf("%d", &year);
		while (now<year)
		{
			if ((now % 100 == 0 && now % 400 == 0) || (now % 100 != 0 && now % 4 == 0))
				step += 2;
			else
				step++;
			now++;
		}
		step %= 7;
		switch (step)
		{
		case 0:printf("monday\n");
			break;
		case 1:printf("tuesday\n");
			break;
		case 2:printf("wednesday\n");
			break;
		case 3:printf("thursday\n");
			break;
		case 4:printf("friday\n");
			break;
		case 5:printf("saturday\n");
			break;
		case 6:printf("sunday\n");
		}
	}
	return 0;
}