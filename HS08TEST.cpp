#include <iostream>
#include <iomanip>

using namespace std;

int HS08TEST() {
	int withdraw;
	double balance;
	cin >> withdraw >> balance;
	if (withdraw % 5 == 0 && withdraw + 0.50 < balance)
	{
		balance = balance - withdraw - 0.50;
	}
	cout << setprecision(2) << fixed << balance;
	return 0;
}
