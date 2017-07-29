#include <iostream>
#include <string>

using namespace std;

void SNELECT()
{
	int t, snakes, mongooses;
	string str;
	cin >> t;
	while (t--)
	{
		snakes = mongooses = 0;
		cin >> str;
		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] == 's')
			{
				++snakes;
			}
			if (str[i] == 'm')
			{
				++mongooses;
				if (str[i - 1] == 's')
				{
					--snakes;
				}
				else if (str[i+1] == 's')
				{
					--snakes;
				}
			}
		}
		if (mongooses == snakes)
		{
			cout << "tie" << endl;
		}
		else if (mongooses > snakes)
		{
			cout << "mongooses" << endl;
		}
		else
		{
			cout << "snakes" << endl;
		}
		getchar();
		getchar();
	}
	
}