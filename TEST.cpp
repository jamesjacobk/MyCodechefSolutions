#include <iostream>
#include <conio.h>

using namespace std;

int TEST()
{
	int a;
	while (1)
	{
		cin >> a;
		if (a != 42)
		{
			cout << a << "\n";
		}
		else
		{
			break;
		}
	}
	return 0;
}