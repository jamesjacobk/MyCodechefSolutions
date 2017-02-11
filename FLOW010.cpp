#include <cstdio>

int FLOW010()
{
	int t;
	char ship;
	scanf("%d", &t);
	t = t * 2;
	while (t--)
	{
		scanf("%c", &ship);
		switch (ship)
		{
			case 'B':
			case 'b':
				printf("Battleship\n");
				break;
			case 'C':
			case 'c':
				printf("Cruiser\n");
				break;
			case 'D':
			case 'd':
				printf("Destroyer\n");
				break;
			case 'F':
			case 'f':
				printf("Frigate\n");
				break;
			default:
				break;
		}
	}
	return 0;
}