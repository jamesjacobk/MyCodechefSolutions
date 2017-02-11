#include <iostream>
#include <math.h>

using namespace std;

int FCTRL()
{
	int t, num, zeros, power, increment;
	cin >> t;
	while (t-- > 0)
	{
		power = 25;
		increment = 3;
		cin >> num;
		zeros = num / 5;
		while (power <= num)
		{
			zeros = zeros + (num / power);
			power = pow(5,increment);
			++increment;
		}
		cout << zeros << endl;
	}
	
	return 0;
}