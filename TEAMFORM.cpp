#include <iostream>

using namespace std;

int TEAMFORM() {
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		if (n % 2 == 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
		m *= 2;
		while (m--)
		{
			cin >> n;
		}
	}
	return 0;
}