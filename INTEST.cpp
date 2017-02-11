#include <iostream>
#include <conio.h>

using namespace std;

int INTEST()
{
	int	n, k, counter = 0;
	cin >> n >> k;
	while (n-- > 1)
	{
		if (n % k == 0)
			++counter;
	}
	cout << counter;
	return 0;
}