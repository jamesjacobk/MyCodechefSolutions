#include <iostream>

using namespace std;

int SNAKPROC() {

	int t, n;
	char temp;
	bool set;
	cin >> t;
	while (t--)
	{
		set = false;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			if (temp == 'H')
			{
				if (set == true)
				{
					cin.clear();
					cin.ignore(n, '\n');
					break;
				}
				else
				{
					set = true;
				}

			}
			if (temp == 'T')
			{
				if (set == false)
				{
					set = true;
					cin.clear();
					cin.ignore(n, '\n');
					break;
				}
				else
				{
					set = false;
				}
			}
		}
		if (set == false)
		{
			cout << "Valid" << endl;
		}
		else
		{
			cout << "Invalid" << endl;
		}
	}
	return 0;
}