#include <iostream>

using namespace std;

int FCTRL2()
{
	int t, num, i, m, index, temp, carry, x;
	int a[200];
	cin >> t;
	while (t-- > 0)
	{
		m = 0;
		cin >> num;
		temp = num;

		while (temp != 0)
		{
			a[m] = temp % 10;
			temp = temp / 10;
			++m;
		}

		x = 0;
		carry = 0;

		for (i = num - 1; i >= 2; --i)
		{
			index = 0;

			while (index < m)
			{
				x = a[index] * i + carry;
				a[index] = x % 10;
				carry = x / 10;
				++index;
			}

			while (carry != 0)
			{
				a[index] = carry % 10;
				carry = carry / 10;
				++index;
				++m;
			}
		}

		for (i = m - 1; i >= 0; --i)
		{
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}