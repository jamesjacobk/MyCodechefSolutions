#include <stdio.h>

using namespace std;

int TLG()
{
	int n, p1, p2, winner, maxdiff = 0, temp, p1total = 0, p2total = 0;
	scanf("%d", &n);

	while (n--)
	{
		scanf("%d %d", &p1, &p2);
		p1total += p1;
		p2total += p2;
		if ((p1total > p2total) && ((p1total - p2total) > maxdiff))
		{
			winner = 1;
			maxdiff = p1total - p2total;
		}
		else if ((p2total - p1total) > maxdiff)
		{
			winner = 2;
			maxdiff = p2total - p1total;
		}
	}

	printf("%d %d", winner, maxdiff);
	return 0;
}