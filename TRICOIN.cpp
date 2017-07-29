#include <iostream>
#include <cmath>
using namespace std;

int TRICOIN() {
	int t;
	double n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << floor((sqrt(1 + 8 * n) - 1) / 2) << endl;
	}
	return 0;
}