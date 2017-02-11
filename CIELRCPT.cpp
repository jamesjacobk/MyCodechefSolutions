#include <iostream>

using namespace std;

int CIELRCPT()
{
	int t, p, minmenu, denominator, i;
	cin >> t;
	while (t-->0)
	{
		minmenu = 0;
		denominator = 2048;
		i = 0;
		cin >> p;
		while (p != 0 || i != 12)
		{
			minmenu += p / denominator;
			p %= denominator;
			denominator /= 2;
			++i;
		}
		cout << minmenu;
	}
	getchar();
	getchar();
	return 0;
}
